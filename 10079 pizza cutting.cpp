#include<stdio.h>
int main()
{
    long long int n;

    while(scanf("%lld",&n)==1)
    {
        if(0<=n && n<=210000000)
            printf("%lld\n",(n*n+n+2)/2);
    }

    return 0;
}
