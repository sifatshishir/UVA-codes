#include <stdio.h>
 long long int num1, num2,i, j, k, n ,count, res, tem, highest_value;
int main()
{

    while(scanf("%lld %lld", &num1, &num2)==2)
    {
        if(num1==0 || num2==0) break;

        if(num1>num2)
        {
            tem=num1;
            num1=num2;
            num2=tem;
        }

        if(num1==1 && num2<=2)
            printf("Between %lld and %lld, 1 generates the longest sequence of 3 values.\n", num1, num2);
        else
        {
            count=0;
            highest_value=0;
            for(i=num1; i<=num2; i=i+1)
            {
                n=i;
                for(j=0; n!=1; j++)
                {
                    res=(n%2);
                    switch(res)
                    {
                    case 1:
                        n=((n<<2)+1)-n;
                        break;
                    case 0:
                        n=n>>1;
                        break;
                    }
                }
                if(j>count)
                {
                    count=j;
                    highest_value=i;
                }
            }
            printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",num1, num2, highest_value, count);
        }

    }
    return 0;
}
