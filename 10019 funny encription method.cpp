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

int find_binary_one(int n)
{
    int bin=0;
    while(n)
    {
        int a=n%2;
        if(a==1)
            bin++;
        n/=2;
    }
    return bin;
}

int find_hexa_one(int n)
{
    int hex=0;
    while(n)
    {
        int h=n%10;
        n/=10;
        if(h==1 || h==2 || h==4 || h==8)
            hex+=1;
        else if(h==3 || h==5 || h==6 || h==9)
            hex+=2;
        else if(h==7)
            hex+=3;
    }
    return hex;
}

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<find_binary_one(n)<< " "<<find_hexa_one(n)<<endl;
    }
    return 0;
}


