#include<stdio.h>
#include<math.h>

int happy(long long int n)
{
    long long int sum,store[10000],a,i,j;

    j=0;

    a=0;
    sum=0;

    while(n!=1)
    {

        while(n!=0)
        {
            sum=sum+((n%10)*(n%10));
            n=n/10;
        }

        n=sum;
        sum=0;
        for(i=0;i<a;i++)
        {
            if(n==store[i])
            {
                j=1;
                break;
            }
        }
        store[a]=n;
        a++;
        if(j==1)
        break;

    }

    if(n==1)
    return 1;
    else
    return 0;
}

int main()
{
    long long int t,n,i,j,p;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        p=happy(n);
        if(p==1)
            printf("Case #%lld: %lld is a Happy number.\n",i,n);
        else if(p==0)
            printf("Case #%lld: %lld is an Unhappy number.\n",i,n);
    }

    return 0;
}
