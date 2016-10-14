#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <cstring>
#include <map>
#include <cstdlib>
#include <cwctype>
#include <math.h>
#include <utility>
using namespace std;

#define rep(i,n) for( __typeof(n)i = 0 ; i < n ; i++)
#define For(i,n) for( __typeof(n)i = 1 ; i <= n ; i++)
#define forstl(i,n) for(__typeof(n.begin())i = n.begin();i!=n.end();i++)
#define forab(i,a,b) for( __typeof(b) i = a ; i <= (b) ; i++ )
#define forba(i,b,a) for( __typeof(b) i = b ; i >= (a) ; i-- )

#define vll vector<ll>
#define vi vector<int>
#define MP make_pair
typedef long long ll;
typedef unsigned long long ull;
const int MAX = 1e6+7;
#define PI acos(-1.0)
string a,b;
int main()
{
    //FILE *f=freopen("output.txt","w",stdout);
    //FILE *in=freopen("input.txt","r",stdin);
    //cout<< "alu" <<endl;
    while(cin>>a)
    {
        if(a=="#")
            break;
        b=a;
        next_permutation(a.begin(),a.end());
        if(a>b)
            cout<<a<<endl;
        else
            cout<< "No Successor"<<endl;
    }
    //fclose(in);
    //fclose(f);
    return 0;
}
