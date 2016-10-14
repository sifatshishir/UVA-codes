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

set<string>s;
set<string>::iterator it;
map<string,int>mp;
int main()
{
    int t;
    string country,wmn;

    while(cin>>t)
    {
        s.clear();
        mp.clear();
        while(t--)
        {
            cin>>country;
            getline(cin,wmn);
            mp[country]++;
            s.insert(country);
        }
        for(it = s.begin();it!= s.end();it++)
            cout<<*it<< " "<<mp[*it]<<endl;
    }


    return 0;

}


