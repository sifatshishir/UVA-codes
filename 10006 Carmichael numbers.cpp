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


vector<int>c;

bool is_prime(int n)
{
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3;i<=sqrt(n);i++)
        if(n%i==0)
        return false;
    return true;
}

unsigned bm(unsigned int x,int y,int z)  //  x ^ y mod z
{
    if(y==0)
        return 1;
    if(y%2==0)
        return (bm(x,y/2,z)*bm(x,y/2,z))%z;
    else
        return ((x%z)*bm(x,y-1,z))%z;
}

void carmichael()
{
    for(int i=2;i<65000;i++)
    {
        if(is_prime(i))
            continue;
        unsigned int j;
        for(j=2;j<i;j++)
            if(bm(j,i,i)!=j)
                break;
        if(j==i)
            c.push_back(i);
    }

}


int main()
{
    carmichael();
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int p=0;
        for(int i=0;i<c.size();i++)
        {
            if(c[i]==n)
            {
                p=1;
                break;
            }
        }
        if(p)
            cout << "The number "<<n<< " is a Carmichael number."<<endl;
        else
            cout<<n<< " is normal."<<endl;
    }

    return 0;
}

