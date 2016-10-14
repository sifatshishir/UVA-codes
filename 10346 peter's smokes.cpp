#include <stdio.h>
int main()
{
    int n,k,m;
    while(scanf("%d %d",&n,&k)==2 && k>1) // k>1
    {
        m=n;
        while(n>=k)
        {
            m=m+(n/k);
            n=(n/k)+(n%k);  // formula
        }
        printf("%d\n",m);

    }

    return(0);
}
