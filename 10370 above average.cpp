#include <stdio.h>
int main()
{
    int n,i,j,count,a[1020];
    float ans,avg,sum,m;

    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        avg=0;
        sum=0;
        count=0;

        scanf("%f",&m);  // it should be float,cz avg can't be found
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        avg=sum/m;   // if m isn't float,avg can't be found
        for(i=0;i<m;i++)
        {
            if(a[i]>avg) //  >= won't be accepted
                count++;
        }
        ans=(count*100)/m;
        printf("%.3f%%\n",ans);

    }

    return(0);
}
