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

map<string,int>mp;
string name[15];
string ppl;
int main()
{
    int n,i,p,q,div=0,res=0,k=1;

    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>name[i];
            mp[name[i]]=0;
        }
        int m=n;
        while(m--)
        {
            cin>>ppl>>p>>q;
            if(q!=0)
            {
                div=p/q;
                res=div*q;
                mp[ppl]-=res;
                for(i=1; i<=q; i++)
                {
                    cin>>ppl;
                    mp[ppl]+=div;
                }
            }
        }
        if(k!=1)
            cout<<endl;
        for(i=1; i<=n; i++)
            cout<<name[i]<< " "<<mp[name[i]]<<endl;
        k++;
    }
    return 0;
}
