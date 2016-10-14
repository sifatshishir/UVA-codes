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

int a[1000001],b[1000001],sum[1000001];

int main()
{
    int n,m;
    cin>>n;
    //cout<<endl;  // shouldn't be , gives WA -_-
    while(n--)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(a));
        memset(sum,0,sizeof(a));
        cin>>m;
        for(int i=0;i<m;i++)
            cin>>a[i]>>b[i];
        int k=0,add,carry=0;
        for(int i=m-1;i>=0;i--)
        {
            add=a[i]+b[i]+carry;
            if(add>9)
            {
                sum[k++]=add%10;
                carry=1;
            }
            else
            {
                sum[k++]=add;
                carry=0;
            }
        }
        for(int i=k-1;i>=0;i--)
            cout<<sum[i];
        cout<<endl;
        if(n!=0)
            cout<<endl;
    }

    return 0;
}


