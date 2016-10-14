#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int i;
    while(gets(a))  // EOF file
    {

        for(i=0;a[i]!='\0';i++)
            printf("%c",a[i]-7);

            printf("\n");
    }
    return 0;
}
