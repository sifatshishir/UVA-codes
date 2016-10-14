#include<stdio.h>
#include<math.h>
void divisor(long long x)
{
    long long i,j;
    for(i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            while(x%i==0)
            {
                printf("%lld",i);
                x=x/i;
                if(x>1)
                    printf(" x ");
            }
        }
    }
    if(x>1)
        printf("%lld",x);
    printf("\n");
}
int main()
{
    long long n,i;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        if(n>0)
        {
            printf("%lld = ",n);
            divisor(n);
        }

        else
        {
            printf("%lld = ",n);
            printf("-1 x ");
            n=n*(-1);
            divisor(n);
        }
    }
    return 0;
}
