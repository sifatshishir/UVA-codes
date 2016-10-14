#include<stdio.h>
long long int recurse(long long int x,long long int y,long long int z);
int main()
{
    long long int b,p,m,ans;
    while(scanf("%lld %lld %lld",&b,&p,&m)==3)
    {
        ans=recurse(b,p,m);
        printf("%lld\n",ans);
    }
    return 0;
}
long long int recurse(long long int x,long long int y,long long int z)
{
    if(y==0)
        return 1;

    if(y%2==0)
        return (recurse(x,y/2,z)*recurse(x,y/2,z))%z;

    else
        return ((x%z)*recurse(x,y-1,z))%z;
}
