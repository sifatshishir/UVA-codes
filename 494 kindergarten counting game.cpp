#include<stdio.h>
#include<string.h>
int main()
{
   char a[1000];
   int i,word,temp;

   while(gets(a))
   {
       word=0;
       temp=1;
       for(i=0;i<strlen(a);i++)
       {
           if((a[i]<='z' && a[i]>='a')||(a[i]<='Z' && a[i]>='A'))
           {
               if(temp==1)
                word++;
                temp=0;
           }
           else
            temp=1;

       }
       printf("%d\n",word);
   }

   return 0;

}
