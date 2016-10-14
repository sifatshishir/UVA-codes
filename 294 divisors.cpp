#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,t,j,i,divisor,Max,ans;
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld %lld",&a,&b);
        Max=0;
        if(a==1&&b==0)
        {
            printf("Between 1 and 1, 0 has a maximum of 2 divisors.\n");
            continue;
        }
        for(i=a;i<=b;i++)
        {

            divisor=0;
            int p=sqrt(i);
            for(j=1;j<=p;j++)
            {
                if(i%j==0)
                {
                    divisor++;
                    if(i/j!=j)
                    {
                        divisor++;
                    }
                }
                if(Max<divisor)
                {
                    Max=divisor;
                    ans=i;
                }
            }
        }
    printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,ans,Max);
    }
    return 0;
}
