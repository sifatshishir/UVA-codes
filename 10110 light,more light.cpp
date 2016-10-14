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



int main()
{
    ll n,a;
    while(cin>>n)
    {
        if(n==0)
            break;
        a=sqrt(n);
        if(a*a==n)
            cout<< "yes"<<endl;
        else
            cout<< "no"<<endl;
    }
    return 0;
}


