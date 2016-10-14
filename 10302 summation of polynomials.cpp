#include<stdio.h>
int main()
{
    long  long int n,sum;
    while(scanf("%lld",&n)==1)
    {
        sum=n*(n+1);
        sum=sum/2;
        sum=sum*sum;
        printf("%lld\n",sum);
    }
    return 0;
}
