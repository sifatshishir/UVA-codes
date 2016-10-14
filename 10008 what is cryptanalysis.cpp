#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[1000],x;
    int len, t,value[26]={0},i,j,k,max;
    while(scanf("%d",&t)==1)
    {
        getchar();
        for(i=0;i<t;i++)
        {
            gets(a);
            len=strlen(a);
            for(j=0;j<len;j++)
            {
                x=toupper(a[j]);
                if(x>='A' && x<='Z')
                {
                    value[x-65]++;
                }
            }
        }



        max=0;


        for(k=0;k<26;k++)
        {
            if(value[k]>max)
                max=value[k];
        }

        for(;;)
        {
           for(i=0;i<26;i++)
           {
                if(value[i]==max)
                printf("%c %d\n",i+65,max);
           }
            max--;
            if(max==0)
                break;

        }
    }

 return 0;
}
