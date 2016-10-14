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
//#define MAX 999999
//#define pi 3.14159265359


ll nCr(ll n,ll r)
{
    ll ans=1;
    r=min(r,n-r);
    for(int i=1;i<r+1;i++)
    {
        ans*=(n-r+i);
        ans/=i;
    }
    return ans;
}


int main()
{
    ll n,r;
    while(cin>>n>>r)
    {
        if(n==0 && r==0)
            break;
        cout<<nCr(n,r)<<endl;
    }

    return 0;
}

