#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j=0,k,m,a[10050],x,got;
    while(scanf("%d %d",&n,&m)==2)
    {
        j++;
        if(n==0 && m==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);

        printf("CASE# %d:\n",j);

        for(i=0;i<m;i++)
        {
            scanf("%d",&x);
            got=0;
            for(k=0;k<n;k++)
            {
                if(a[k]==x)
                {
                     printf("%d found at %d\n",x,k+1);
                     got=1;
                     break;
                }
                else if(a[k]>x)
                    break;
            }
            if(got!=1)
                printf("%d not found\n",x);
        }
    }

    return 0;
}
