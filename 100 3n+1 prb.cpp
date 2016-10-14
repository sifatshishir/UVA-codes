#include<stdio.h>
#include<math.h>
long long int cycle(long long int x);
int main()
{
    long long a,b,i,j,x,y,ans,range;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a<b)
        {
            x=a;
            y=b;
        }
        else
        {
            x=b;
            y=a;
        }
        ans=0;
        for(i=x;i<=y;i++)
        {
            range=cycle(i);
            if(range>ans)
            {
                ans=range;
            }
        }
        printf("%lld %lld %lld\n",a,b,ans);

    }

    return 0;
}
long long int cycle(long long int x)
{
    long long int count=0;
    if(x==1)
        return 1;
    while(x!=1)
    {
        if(x%2!=0)
        {
            x=3*x+1;
            count++;
        }

        else if(x%2==0)
        {
            x=x/2;
            count++;
        }

    }
    return count+1;
}
