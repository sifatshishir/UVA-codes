#include<stdio.h>
#define MAX 100000
int digit[MAX+10];
int digit_sum(int n)
{
    int s = n;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}

void digit_generator()
{
    int i,ans;
    for(i=1;i<=MAX;i++)
    {
        ans = digit_sum(i);
        if(ans <= MAX && digit[ans]==0)
            digit[ans]=i;
    }
}
int main()
{
    digit_generator();
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",digit[n]);
    }

    return 0;
}
