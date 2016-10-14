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

int main()
{
    int t,a,ltr[26];
    string s;
    ll n;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>s;
        memset(ltr,0,sizeof(ltr));

        for(int i=0;i<s.size();i++)
            ltr[s[i]-'A']++;

        n=1;
        a=0;
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<ltr[i];j++)
            {
                n=n*(a+1)/(1+j);
                a++;
            }
        }
        cout<< "Data set "<<tc<< ": "<<n<<endl;
    }
    return 0;
}


