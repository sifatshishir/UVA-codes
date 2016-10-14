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

int m[101][101];
int sum[101][101];
int dp[101];
int n,ans;

int main()
{
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>m[i][j];

        for(int i=0;i<n;i++)
        {
            sum[i][0]=0;
            for(int j=1;j<=n;j++)
                sum[i][j]=sum[i][j-1]+m[i][j-1];
        }

        ans=-9999999;

        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                dp[0]=0;
                for(int k=0;k<n;k++)
                {
                    dp[k+1]=max(sum[k][j+1]-sum[k][i]+dp[k],sum[k][j+1]-sum[k][i]);
                    ans=max(ans,dp[k+1]);
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}


