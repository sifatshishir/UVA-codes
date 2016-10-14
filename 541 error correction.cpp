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

int m[100][100],r[100],c[100];

int main()
{
    int t,n;
    while(cin>>n)
    {
        if(n==0)
            break;
        memset(r,0,sizeof(r));
        memset(c,0,sizeof(c));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>m[i][j];
                r[i]+=m[i][j];
                c[j]+=m[i][j];
            }
        }
        int r_count=0,c_count=0,ii=0,jj=0;
        for(int i=0; i<n; i++)
        {
            if(r[i]%2)
            {
                r_count++;
                ii=i;
            }
            if(c[i]%2)
            {
                c_count++;
                jj=i;
            }
            if(r_count+c_count>2)
                break;
        }
        if(r_count+c_count==0)
            cout<< "OK"<<endl;
        else if(r_count==1 && c_count==1)
            cout<< "Change bit ("<<ii+1<< ","<<jj+1<< ")"<<endl;
        else if(r_count+c_count>0)
            cout<< "Corrupt"<<endl;
    }
    return 0;
}
