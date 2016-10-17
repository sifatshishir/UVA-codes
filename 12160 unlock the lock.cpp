#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <map>
using namespace std;
#define ll long long;
#define vi vector<int>

string add(string a,string b)
{
    int la=a.size(),lb=b.size();
    string x="";
    if(la>lb)
    {
        for(int i=0;i<la-lb;i++)
            x+='0';
        x+=b;
        b=x;
    }
    else if(la<lb)
    {
        for(int i=0;i<lb-la;i++)
            x+='0';
        x+=a;
        a=x;
    }
    int sum=0,carry=0;
    for(int i=max(la,lb)-1;i>=0;i--)
    {
        sum=carry+(a[i]-'0')+(b[i]-'0');
        if(sum>=10)
            carry=1;
        else
            carry=0;
        x+=((sum%10)+'0');
    }
    if(carry!=0)
        x+=carry+'0';
    reverse(x.begin(),x.end());
    return x;
}
struct node
{
    string s;
    int c;
};
map<string,int>mp;
string num[20];
void bfs(string st,string en,int n)
{
    node now,next;
    mp.clear();
    string temp,x;
    queue<node>q;
    while(!q.empty())
        q.pop();
    now.s=st,now.c=0;
    mp[st]=1;
    q.push(now);
    while(!q.empty())
    {
        now=q.front();
        q.pop();
        //cout<<now.s<<endl;
        if(now.s==en)
        {
            cout<< now.c<<endl;
            return;
        }
        for(int i=0;i<n;i++)
        {
            x="",temp="";
            x=add(now.s,num[i]);
            //cout<<x<<endl;
            for(int i=x.size()-1,j=0;i>=0 && j<4;i--,j++)
                temp[j]=x[i];
            x="";
            for(int i=3;i>=0;i--)
                x+=temp[i];
            //cout<<x<< "       "<<temp<<endl;
            if(mp[x]==1)
                continue;
            next.s=x,next.c=now.c+1;
            mp[x]=1;
            //cout<<x<< " "<<temp<<endl;
            q.push(next);
        }
    }
    cout<< "Permanently Locked"<<endl;
    return;
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //FILE*f=freopen("input.txt","r",stdin);
    //FILE*o=freopen("output.txt","w",stdout);
    string l,r,x;
    int n,tc=1;;
    while(cin>>l>>r>>n)
    {
        if(l=="0")
            break;
        for(int i=0;i<n;i++)
            cin>>num[i];
        cout<< "Case "<<tc++<< ": ";
        bfs(l,r,n);
    }
    //fclose(f);
    //fclose(o);

    return 0;
}
