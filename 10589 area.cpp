// Sifat   Shishir

#include<iostream>
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


int main()
{
    int N,A;
    double x,y;

    while(true)
    {
        scanf("%d %d",&N,&A);
        if(N == 0) break;

        int cont = 0,R2 = A*A;

        for(int i = 0; i<N; ++i)
        {
            scanf("%lf %lf",&x,&y);

            bool valid = true;

            if((x-0)*(x-0)+(y-0)*(y-0)>R2) valid = false;
            if((x-0)*(x-0)+(y-A)*(y-A)>R2) valid = false;
            if((x-A)*(x-A)+(y-0)*(y-0)>R2) valid = false;
            if((x-A)*(x-A)+(y-A)*(y-A)>R2) valid = false;

            if(valid) ++cont;
        }

        printf("%.5f\n",(double)cont*(A*A)/N);
    }
    return 0;
}
