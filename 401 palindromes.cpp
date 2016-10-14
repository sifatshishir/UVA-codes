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
char mirror[]={ 'A','H','I','M','O','T','U','V','W','X','Y','1','8' };

int main()
{
    //FILE *f=freopen("output.txt","w",stdout);
    //FILE *in=freopen("input.txt","r",stdin);
    //cout<< "alu" <<endl;
    while(cin>>a)
    {
        b=a;
        int len=a.size(),p;
        reverse(a.begin(),a.end());
        if(a==b)
        {
            p=1;
            for(int i=0;i<len;i++)
            {
                int c=0;
                for(int j=0;j<13;j++)
                {
                    if(b[i]==mirror[j])
                    {
                        c=1;
                        break;
                    }
                }
                if(!c)
                {
                    p=0;
                    break;
                }
            }
            if(p)
                cout<<b<< " -- is a mirrored palindrome."<<endl;
            else
                cout<<b<< " -- is a regular palindrome."<<endl;
        }
        else
        {
            p=1;
            for(int i=0;i<len;i++)
            {
                if(b[i]=='E' || b[i]=='3')
                {
                    if(b[i]=='E'&&a[i]!='3')
                    {
                        p=0;
                        break;
                    }
                    else if(b[i]=='3'&&a[i]!='E')
                    {
                        p=0;
                        break;
                    }
                }
                else if(b[i]=='J' || b[i]=='L')
                {
                    if(b[i]=='J'&&a[i]!='L')
                    {
                        p=0;
                        break;
                    }
                    else if(b[i]=='L'&&a[i]!='J')
                    {
                        p=0;
                        break;
                    }
                }
                else if(b[i]=='S' || b[i]=='2')
                {
                    if(b[i]=='S'&&a[i]!='2')
                    {
                        p=0;
                        break;
                    }
                    else if(b[i]=='2'&&a[i]!='S')
                    {
                        p=0;
                        break;
                    }
                }
                else if(b[i]=='Z' || b[i]=='5')
                {
                    if(b[i]=='Z'&&a[i]!='5')
                    {
                        p=0;
                        break;
                    }
                    else if(b[i]=='5'&&a[i]!='Z')
                    {
                        p=0;
                        break;
                    }
                }
            }
            if(p)
                cout<<b<< " -- is a mirrored string."<<endl;
            else
                cout<<b<< " -- is not a palindrome."<<endl;
        }
        cout<<endl;
    }
    //fclose(in);
    //fclose(f);
    return 0;
}
