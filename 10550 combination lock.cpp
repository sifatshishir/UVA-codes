#include<stdio.h>
int main()
{
    int s,a,b,c;

    while(scanf("%d %d %d %d",&s,&a,&b,&c)==4)
    {
        if(s==0 && a==0 && b==0 && c==0)
            break;

        int sum = 1080;

        if(a>=s)
            sum+=(40-(a-s))*9;
        else
            sum+=(s-a)*9;

        if(b<=a)
            sum+=(40-(a-b))*9;
        else
            sum+=(b-a)*9;

        if(c>=b)
            sum+=(40-(c-b))*9;
        else
            sum+=(b-c)*9;

        printf("%d\n",sum);
    }

    return 0;
}
