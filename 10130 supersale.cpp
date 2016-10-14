#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MP make_pair
#define vi vector<int>
#define vll vector<ll>
const ll MAX = 9999999;
#define MOD 10000000007

int cost[1111],weight[1111];
int dp[1111][50];
int cap,n;

int knapsack(int i,int w)
{
    if(i>=n+1)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];

    int profit1=0,profit2=0;
    if(w+weight[i]<=cap)
    {
        profit1=cost[i]+knapsack(i+1,w+weight[i]);
    }
    profit2=knapsack(i+1,w);
    return dp[i][w]=max(profit1,profit2);
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //FILE*f=freopen("input.txt","r",stdin);
    //FILE*o=freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>cost[i]>>weight[i];

        int q,ans=0;
        cin>>q;
        while(q--)
        {
            memset(dp,-1,sizeof(dp));
            cin>>cap;
            ans+=knapsack(1,0);
        }
        cout<<ans<<endl;
    }
    //fclose(f);
    //fclose(o);

    return 0;
}
