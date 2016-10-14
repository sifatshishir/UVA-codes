#include<stdio.h>
void fact(long long int n)
{
    long long int i,f=1;
    for(i=1;i<=n;i++)
        f*=i;

    printf("%lld\n",f);
}
int main()
{
    long long int m;
    while(scanf("%lld",&m)==1)
    {
        if(m<0&&m%2==0)
            printf("Underflow!\n");
        else if(m<0&&m%2!=0)
            printf("Overflow!\n");
        else if(m > 13)
            printf("Overflow!\n");
        else if(m==0 ||m < 8)
            printf("Underflow!\n");
        else
            fact(m);
    }

    return 0;
}
