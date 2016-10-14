#include<stdio.h>
#include <cstring>
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

void div(char a[],ll b)
{
    ll f=1,rem=0;
    ll l=strlen(a);
    for(ll i=0;i<l;i++)
    {
        rem=a[i]-'0'+rem*10;
        if(rem/b!=0)
            f=0;
        if(f==0)
            cout<<rem/b;
        rem%=b;
    }
    if(f==1)
        cout<< "0";
}

int rem(char a[],ll b)
{
    ll rem=0;
    ll l=strlen(a);
    for(ll i=0;i<l;i++)
    {
        rem=a[i]-'0'+rem*10;
        rem%=b;
    }
    return rem;
}
int main()
{
    ll b;
    char ch,a[100000];

    while(scanf("%s %c %lld",a,&ch,&b)==3)
    {
        if(ch=='/')
        {
            div(a,b);
            cout<<endl;
        }
        else
            cout<<rem(a,b)<<endl;
    }

    return 0;
}


