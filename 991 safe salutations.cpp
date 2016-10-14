#include<stdio.h>
int main()
{
    int a[100];
    a[0]=1;
    a[1]=1;
    a[2]=2;
    int j,k,n,i;
    for(i=3;i<11;i++)
    {
        a[i]=0;
        j=0,k=i-1;
        while(j<i)
        {
            a[i]+=a[j]*a[k];
            j++,k--;
        }
    }
    int p=0;
    while(scanf("%d",&n)==1)
    {
        if(p==1)
            printf("\n");
        else
            p=1;
        printf("%d\n",a[n]);

    }
    return 0;
}
