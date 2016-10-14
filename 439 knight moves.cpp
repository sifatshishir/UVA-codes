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
char chess[10][10];
int x,y,xx,yy,aa,bb;
char a,b;
struct node
{
    int a,b,c;
};
int A[]={-2,-2,-1,-1,1,1,2,2};
int B[]={-1,1,-2,2,2,-2,1,-1};
int vis[10][10];

queue<node>q;

void bfs(node x)
{
    //q.empty();
    int ans=0;
    node now,next;
    vis[x.a][x.b]=1;
    x.c=0;
    q.push(x);

    while(!q.empty())
    {
        now=q.front();
        q.pop();
        if(now.a==yy && now.b==y)
        {
            ans=now.c;
            cout<<ans<< " knight moves."<<endl;
        }
        for(int i=0;i<8;i++)
        {
            aa=now.a+A[i],bb=now.b+B[i];
            if(vis[aa][bb])
                continue;
            else if(aa<1 || aa>8 || bb<1 || bb>8)
                continue;

            next.a=aa,next.b=bb;
            vis[aa][bb]=1;
            next.c=now.c+1;
            q.push(next);

        }
    }

}
int main()
{

    while(cin>>a>>x>>b>>y)
    {
        q.empty();
        node horse;
        //getchar();
        for(int i=0;i<10;i++)
            memset(vis[i],0,sizeof(vis[i]));

        xx=a-'a';
        xx++;
        yy=b-'a';
        yy++;
        cout<< "To get from "<<a<<x<< " to "<<b<<y<< " takes ";
        //vis[a][xx]=1;
        horse.a=xx,horse.b=x;
        bfs(horse);
       // getchar();
    }
    return 0;
}

