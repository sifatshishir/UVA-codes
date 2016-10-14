#include<stdio.h>
#include<math.h>
int is_prime(long long int x);
int rev(long long int n);
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if (is_prime(n)!=1)
        printf("%lld is not prime.\n",n);
        else
        {
            int n1=rev(n);
            if (is_prime(n1)==1 && n1!=n)
                printf("%lld is emirp.\n",n);

            else
                printf("%lld is prime.\n",n);
        }
    }
    return 0;
  }
int is_prime(long long int x)
{
    int i;
    for (i=2;i<=sqrt(x);i++)
    {
        if (x%i==0)
            return 0;
    }
    return 1;
}
int rev(long long int n)
{
    long long int r = 0;
    while (n > 0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    return r;
  }
