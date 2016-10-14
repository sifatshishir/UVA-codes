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


int main()
{
    string a,b;
    ll c;

    while(cin>>a>>b)
    {
        c=0;
        ll s=a.size();
        for(ll i=0;i<b.size() && c<s;i++)
        {
            if(b[i]==a[c])
                c++;
        }
        if(c==s)
            cout<< "Yes"<<endl;
        else
            cout<< "No"<<endl;
    }

    return 0;
}


