#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],ch;
    int i,j,n,l,ans,p;
    scanf("%d%c",&n,&ch);
    while(n--)
    {
        gets(a);
        l=strlen(a);
        ans=0,p=1;
        for(i=0;i<l;i++)
        {
            if(a[i]=='O')
            {
                ans=ans+p;
                p=p+1;
            }
            else if(a[i]=='X')
                p=1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
