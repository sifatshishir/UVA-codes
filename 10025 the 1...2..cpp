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
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        a=abs(a);

        int n=0;
        int sum=0;
        while(sum<a)
            sum+=(++n);

        if(a%2)
            while(sum%2!=1)
                sum+=(++n);
        else
            while(sum%2!=0)
                sum+=(++n);

        if(a==0)
            cout<< "3"<<endl;
        else
            cout<<n<<endl;

        if(t)
            cout<<endl;
    }

    return 0;
}

