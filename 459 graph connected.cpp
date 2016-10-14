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
vector <char> graph[MAX];
char visited[MAX];

char s[3];
int main()
{
    int t;
    char m,ch;

    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%c%c",&m,&ch);
        //getchar();
        for(char i ='A';i<=m;i++)
            graph[i].clear(),visited[i]=0;

        while(1)
        {
            if(scanf("%[^\n]s",s)!=1)
                break;
            getchar();
           // scanf("%*c");
            //gets(s);
            if(!s[0])
                break;

            char x=s[0],y=s[1];

            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        getchar();


        int ans =0;
        vector<char>q;


        for(char i='A';i<=m;i++)
        {
            if(visited[i])
                continue;

            ++ans;
            visited[i]=1;
            q.push_back(i);

            while(q.size()!=0)
            {
                char v=q.back();
                while(graph[v].size())
                {
                    if(visited[graph[v].back()])
                        graph[v].pop_back();
                    else
                        break;
                }
                if(graph[v].size()==0)
                {
                    q.pop_back();
                    continue;
                }
                visited[graph[v].back()]=1;
                q.push_back(graph[v].back());
                graph[v].pop_back();
            }
        }
        printf("%d\n",ans);
        if(t)
            printf("\n");

    }

    return 0;

}


