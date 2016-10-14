#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MP make_pair
#define vi vector<int>
#define vll vector<ll>
const ll MAX = 20000002;
#define MOD 1000000007
char m[110][110];
int r,c;
bool valid(int x,int y)
{
    if(x>=r || x<0 || y>=c || y<0 || m[x][y]=='.')
        return false;
    return true;
}
int Ax[]= {-1,-1,0,0,-1,1,1,1};
int Bx[]= {0,-1,-1,1,1,1,-1,0};
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int p=0;
    while(cin>>r>>c)
    {
        getchar();
        if(r==0 && c==0)
            break;
        if(p!=0)
            cout<<endl;
        p++;
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                cin>>m[i][j];
        cout<< "Field #"<<p<< ":"<<endl;

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                int x=i,y=j;
                int xx,yy;
                int mine=0;
                if(m[i][j]=='.')
                {
                    for(int dot=0; dot<8; dot++)
                    {
                        xx=x+Ax[dot],yy=y+Bx[dot];
                        if(valid(xx,yy))
                            mine++;
                    }
                    cout<<mine;
                }
                else
                    cout<<m[i][j];
            }
            cout<<endl;
        }
        //memset(m,0,sizeof(m));
    }
    return 0;
}
