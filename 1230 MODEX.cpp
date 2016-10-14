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



ll bm(ll x,ll y,ll z)
{
    if(y==0)
        return 1;
    if(y%2==0)
        return (bm(x,y/2,z)*bm(x,y/2,z))%z;
    else
        return ((x%z)*bm(x,y-1,z))%z;
}

int main()
{
    ll t,x,y,z;
    cin>>t;
    ++t;
    while(t--)
    {
        cin>>x;
        if(x==0)
            break;
        cin>>y>>z;
        cout<<bm(x,y,z)<<endl;
    }
    return 0;
}

