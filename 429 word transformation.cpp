#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <cstring>
#include <map>
#include <cstdlib>
#include <cwctype>
#include <math.h>
#include <utility>
using namespace std;

#define rep(i,n) for( __typeof(n)i = 0 ; i < n ; i++)
#define For(i,n) for( __typeof(n)i = 1 ; i <= n ; i++)
#define forstl(i,n) for(__typeof(n.begin())i = n.begin();i!=n.end();i++)
#define forab(i,a,b) for( __typeof(b) i = a ; i <= (b) ; i++ )
#define forba(i,b,a) for( __typeof(b) i = b ; i >= (a) ; i-- )

#define vll vector<ll>
#define vi vector<int>
#define MP make_pair
typedef long long ll;
typedef unsigned long long ull;
const int MAX = 1e6+7;
#define PI acos(-1.0)
string inp[1111];
int p;
int vis[1111];
int cost[1111];
map<string,int>mp;
bool valid(string a,string b)
{
    int len=a.size();
    int len2=b.size();
    if(len!=len2)
        return false;
    int c=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]!=b[i])
            c++;
        if(c>1)
            return false;
    }
    return true;
}
int bfs(string x,string y)
{
    memset(vis,0,sizeof(vis));
    memset(cost,0,sizeof(cost));
    vis[mp[x]]=1;
    queue<string>q;
    q.push(x);
    cost[mp[x]]=0;
    while(!q.empty())
    {
        string now=q.front();
        q.pop();
        if(now==y)
            return cost[mp[y]];
        for(int i=0;i<p;i++)
        {
            if(!vis[i])
            {
                if(valid(now,inp[i]))
                {
                    q.push(inp[i]);
                    vis[i]=1;
                    cost[i]=cost[mp[now]]+1;
                }
            }
        }
    }
}

int main()
{
    //FILE *f=freopen("output.txt","w",stdout);
    //FILE *in=freopen("input.txt","r",stdin);
    //cout<< "alu" <<endl;
    int t;
    string a,b;
    cin>>t;
    while(t--)
    {
        mp.clear();
        p=0;
        cin>>a;
        while(a!="*")
        {
            inp[p]=a;
            mp[a]=p++;
            cin>>a;
        }
        string line;
        size_t pos;
        getline(cin,line);
        getline(cin,line);
        while(line!="")
        {
            pos=line.find(" ");
            a=line.substr(0,pos);
            b=line.substr(pos+1,line.size());
            cout<<a<< " "<<b<< " "<<bfs(a,b)<<endl;
            if(!getline(cin,line))
                break;
        }
        if(t!=0)
            cout<<endl;
    }

    //fclose(in);
    //fclose(f);
    return 0;
}
