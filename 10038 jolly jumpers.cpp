#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[5000],n,i,b[5000],p;

    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        p=1;
        for(i=0;i<n-1;i++)
        {
            b[i]=abs(a[i+1]-a[i]);
        }

        sort(b+0,b+(n-1));
        for(i=1;i<n;i++)
        {
            if(b[i]==b[i-1])
            {
                p=0;break;
            }
        }
        if(p==0)
            printf("Not jolly\n");
        if(p==1)
            printf("Jolly\n");
    }

    return 0;

}
