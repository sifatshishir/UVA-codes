#include<stdio.h>
int main()
{
    int a[1001],n,i,j,count;

    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        count=0;

        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                    count++;
            }
        printf("Minimum exchange operations : %d\n",count);
    }

    return 0;
}
