// Sifat   Shishir

#include<stdlib.h>
#include<sstream>
#include<stdio.h>
#include<cstring>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<stack>
#include<set>
#include<utility>
using namespace std;
#define ll long long
#define MAX 9999999999999999
//#define pi 3.14159265359

//vector<char>G[1011];
int amap[25][25],cost[25];
struct node
{
    int a,c;
};
//int A[]={-2,-2,-1,-1,1,1,2,2};
//int B[]={-1,1,-2,2,2,-2,1,-1};
int vis[25];
int s,e,u,v;


void bfs()
{
    queue<int>q;

    q.push(s);
    vis[s]=1;
    cost[s]=0;

    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(int i=1;i<=20;i++)
        {
            if(amap[u][i]==1 && !vis[i])
            {
                vis[i]=1;
                cost[i]=cost[u]+1;
                q.push(i);
            }
        }
    }
}
int main()
{
    int i,j,t=1,p=1,n,a,qq;
    /*
    memset(amap,0,sizeof(amap));
    memset(vis,0,sizeof(vis));
    memset(cost,0,sizeof(cost));
    */
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {
            cin>>a;
            amap[p][a]=1;
            amap[a][p]=1;
        }
        p++;
        if(p==20)
        {
            p=1;
            cin>>qq;
            cout<< "Test Set #"<<t++<<endl;
            for(j=1;j<=qq;j++)
            {
                cin>>s>>e;
                bfs();
                printf("%2d to %2d: %d\n",s,e,cost[e]);
                memset(vis,0,sizeof(vis));
                memset(cost,0,sizeof(cost));
            }
            cout<<endl;

            memset(amap,0,sizeof(amap));
        }
    }
    return 0;
}

