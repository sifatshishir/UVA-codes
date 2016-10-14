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
    int t,i,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int x,y;
        cin>>x>>y;
        int sum=y-x;
        int step=sqrt(sum);
        int ans=0;
        if(sum==0)
            ans=0;
        else if(step*step==sum)
            ans=step*2-1;
        else if(step*step+step<sum)
            ans=step*2+1;
        else
            ans=step*2;
        cout<<ans<<endl;
    }
    return 0;
}
