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



int main()
{
    double a,b,c,med,area;
    while(cin>>a>>b>>c)
    {
        med=(a+b+c)/2.0;
        area=(4/3.0)*sqrt(med*(med-a)*(med-b)*(med-c));
        if(!(area>0))  // note this !area>0
            area=-1.0;
        printf("%.3lf\n",area);
    }
    return 0;
}


