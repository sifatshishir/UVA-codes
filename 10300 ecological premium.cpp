#include<stdio.h>
int main()
{
    long long int t,a,b,c,s,n;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        s=0;
        while(n--)
        {
            scanf("%lld %lld %lld",&a,&b,&c);
            s+=a*c;
        }
        printf("%lld\n",s);

    }

    return 0;
}
