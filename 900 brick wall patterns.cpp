#include<stdio.h>
int main()
{
    int n,x,y,p,i;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        x=0;y=1;
        for(i=1;i<=n;i++)
        {
            p=x+y; // it's FIBONACCI
            x=y;
            y=p;
        }
        printf("%d\n",p);
    }
    return 0;
}
