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

string s;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        cin>>s;
        if(s=="1" || s=="4" || s=="78")
            cout<<"+"<<endl;
        else if(s[s.length()-1]=='5' && s[s.length()-2]=='3')
            cout<<"-"<<endl;
        else if(s[s.length()-1]=='4' && s[0]=='9')
            cout<<"*"<<endl;
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            cout<<"?"<<endl;
    }
    return 0;
}
