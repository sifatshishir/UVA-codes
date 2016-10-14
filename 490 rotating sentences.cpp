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
#define MAX 1111111

int main()
{
    char s[110][110];
    int mx_s=0,mx_lnth=0;

    for(int i=0;i<110;i++)
        for(int j=0;j<110;j++)
            s[i][j]=' ';

    while(gets(s[mx_s]))
    {
        int lnth = strlen(s[mx_s]);
        s[mx_s][lnth]=' ';
        mx_lnth=max(mx_lnth,lnth);
        mx_s++;
    }

    for(int i=0;i<mx_lnth;i++)
    {
        for(int j=mx_s-1;j>=0;j--)
            cout<<s[j][i];
        cout<<endl;
    }

    return 0;
}


