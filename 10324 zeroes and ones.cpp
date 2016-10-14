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

int main()
{
    char ss[MAX];
    ll i,j,a,b,t,ans;
    ll p=1;
    while(scanf("%s",ss)==1)
    {
        if(strcmp(ss,"\n")==0)
            break;

        cin>>t;
        cout<< "Case "<<p++<< ":"<<endl;
        while(t--)
        {
            cin>>a>>b;
            if(a==b)
            {
                cout<< "Yes"<<endl;
                continue;
            }
            for(i=min(a,b);i<max(a,b);i++)
            {
                if(ss[i]==ss[i+1])
                    ans=1;
                else
                {
                    ans=0;
                    break;
                }
            }
            if(ans==1)
                cout<< "Yes"<<endl;
            else
                cout<< "No"<<endl;
        }
    }

    return 0;
}


