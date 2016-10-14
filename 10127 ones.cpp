// Sifat   Shishir

#include<iostream>
#include<math.h>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;
#define ll long long
#define MAX 9999999999999999
//#define pi 3.14159265359

int ones(int n)
{
    int temp=1,c=1;
    while(temp%n)
    {
        temp=(temp*10+1)%n;
        c++;
    }
    return c;
}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<ones(n)<<endl;
    }
    return 0;
}
