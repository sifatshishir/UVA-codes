#include <stdio.h>
#define MAX  1000005
long long int prime[MAX];
long long int prime_list[MAX];
long long int k;
void sieve();
int main()
{
    sieve();
    long long n,i,j,m1,m2,ans,p;
    while(scanf("%lld",&n)==1)
    {

        if(n==0)
            break;
        else
        {
            p=0;
            for(i=0;;i++)
            {
                if(p==1)
                    break;

                m1=prime_list[i];
                for(j=0;;j++)
                {
                    m2=prime_list[j];
                    ans = m1+m2;
                    if(ans==n)
                    {
                        p=1;
                        break;
                    }
                    else if(ans>n)
                    {
                        break;
                    }

                }
            }
        }
        printf("%lld = %lld + %lld\n",n,m1,m2);
    }




    return 0;
}
void sieve()
{
    long long i,j,k=0;
    for(i=0;i<MAX;i++)
        prime[i]=0;

    for(i=3;i<MAX;i++)
    {
        if(prime[i]==0)
        {
            for(j=i+i;j<MAX;j=j+i)
                prime[j]=1;
            prime_list[k]=i;
            k++;
        }
    }

}

