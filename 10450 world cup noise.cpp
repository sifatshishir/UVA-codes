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

ll fibo[60];
void fib()
{
    fibo[0]=1,fibo[1]=2;
    for(int i=2;i<=51;i++)
        fibo[i]=fibo[i-1]+fibo[i-2];
}
int main()
{
    fib();
    ll n,t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n;
        cout<< "Scenario #"<<tc<< ":"<<endl<<fibo[n]<<endl<<endl;

    }
    return 0;
}
