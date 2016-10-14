#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MP make_pair
#define vi vector<int>
#define vll vector<ll>
const ll MAX = 20000002;
#define MOD 1000000007
struct node
{
    int x,y;
};
int r,c;
char m[30][30];
int vis[30][30];
bool valid(node a)
{
    if(a.x<0 || a.x>=r || a.y<0 || a.y>=c || vis[a.x][a.y] || m[a.x][a.y]=='0')
        return false;
    return true;
}
void init()
{
     memset(vis,0,sizeof(vis));
     memset(m,'\0',sizeof(m));
}
int Ax[]={-1,-1,0,0,-1,1,1,1};
int Bx[]={0,-1,-1,1,1,1,-1,0};

int bfs(node s)
{
    queue<node>q;
    vis[s.x][s.y]=1;
    q.push(s);
    int ans=1;
    node now,next;
    while(!q.empty())
    {
        now=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            next.x=now.x+Ax[i],next.y=now.y+Bx[i];
            if(valid(next))
            {
                ans++;
                vis[next.x][next.y]=1;
                q.push(next);
            }
        }
    }
    return ans;
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    char s[2000];
    cin>>t;
    getchar();
    getchar();
    int f=0;
    while(t--)
    {
        if(f!=0)
            cout<<endl;
        f++;
        r=0;
        init();
        while(gets(s) && strlen(s)>0)
        {
            strcpy(m[r],s);
            c=strlen(s);
            r++;
        }
        int fin=0;
        /*
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                cout<<m[i][j];
            cout<<endl;
        }
        */
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(m[i][j]=='1' && vis[i][j]==0)
                {
                    node ok;
                    ok.x=i,ok.y=j;
                    int temp=bfs(ok);
                    fin=max(fin,temp);
                }
            }
        }
        cout<<fin<<endl;
    }
    return 0;
}
