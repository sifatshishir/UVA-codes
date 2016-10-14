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
#define MAX 1111111
int self[MAX];
void self_nmbr()
{
    self[1]=0;

    for(ll i=1;i<=MAX;i++)
    {
        ll n=i;
        ll sum=n;
        while(n)
        {
            sum+=n%10;
            n/=10;
        }
        self[sum]=1;
    }
}
int main()
{
    self_nmbr();

    for(ll i=1;i<=1000000;i++)
        if(self[i]==0)
        cout<<i<<endl;

    return 0;
}


