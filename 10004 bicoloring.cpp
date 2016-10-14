#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;
long long int fact(long long int n)
{
    long long int i,k=1;
    if(n==0)
        return 0;
    for(i=1;i<=n;i++)
        k*=i;

    return k;
}
#define MAX 10000
vector <int> edges[MAX];
vector <int> cost[MAX];
vector <int> in[MAX];

void bfs(int n)
{
    queue <int>Q;
    Q.push(0);
    vector<int>color(n,MAX);
    bool bipartite = true;

    while(!Q.empty() && bipartite)
    {
        int u = Q.front();
        Q.pop();
        for(int i=0;i<edges[u].size();i++)
        {
            int v = edges[u][i];
            if(color[v]==MAX)
            {
                color[v]=1-color[u];
                Q.push(v);
            }
            else if(color[v]==color[u])
            {
                bipartite = false;
                break;
            }
        }
    }
    if(bipartite)
        printf("BICOLORABLE.\n");
    else
        printf("NOT BICOLORABLE.\n");
}
int main()
{

  int n,e,i,p;


  while(scanf("%d",&n)==1)
  {
      if(n==0)
        break;
      cin>>e;
      for(i=0;i<n;i++)
        edges[i].clear();
      for(i=0;i<e;i++)
      {
          int x,y;
          cin>>x>>y;
          edges[x].push_back(y);
          edges[y].push_back(x);
      }
      bfs(n);
  }

    return 0;

}


