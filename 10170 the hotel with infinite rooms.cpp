// Sifat   Shishir

#include<stdlib.h>
#include<sstream>
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
//#define MAX 999999
//#define pi 3.14159265359
#define pi acos(-1.0)
#define MAX  20000010
long long int prime[MAX];
long long int prime_list[MAX];
//long long int k=1;




int main()
{
    long long int n,day,group,sum;
    while(cin>>n>>day)
    {
        group=0,sum=0;
        while(sum<day)
        {
            group=n;
            sum+=n;
            n++;
        }
        cout<<group<<endl;
    }

    return 0;
}


