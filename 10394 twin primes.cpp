#include<stdio.h>
#include<math.h>
#define MAX  20000010
long long int prime[MAX];
long long int prime_list[MAX];
long long int k=1;

void sieve()
{
    long long i,j;

    int n=sqrt(20000010);
    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(j=i+i;j<=MAX;j=j+i)
                prime[j]=1;
        }
    }
}

void twin_prime()
{
    long long int i;
    for(i=3;i<=MAX;i++)
    {
        if(prime[i]!=1 && prime[i+2]!=1)
        {
            if((i+2)-i==2)
            {
                prime_list[k]=i;
                k++;
            }

        }
    }
}

int main()
{
    sieve();
    twin_prime();

    long long n;
    while(scanf("%lld",&n)==1)
    {
        printf("(%lld, %lld)\n",prime_list[n],prime_list[n]+2);
    }
    return 0;
}

