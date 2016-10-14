#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {

       printf("%d\n",a^b);  // ^ is the XOR operator, return 1 only when 1 value is true

    }
    return 0;
}
