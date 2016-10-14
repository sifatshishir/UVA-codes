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

int digit[11];

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(digit,0,sizeof(digit));
        for(int i=1; i<=n; i++)
        {
            int res=i;
            while(res)
            {
                digit[res%10]++;
                res/=10;
            }

        }
        for(int i=0; i<10; i++)
        {
            cout<<digit[i];
            if(i<9)
                cout<< " ";
            else
                cout<<endl;
        }
    }
    return 0;
}
