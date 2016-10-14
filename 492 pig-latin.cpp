// Sifat   Shishir

#include<stdlib.h>
#include<sstream>
#include<stdio.h>
#include<cstring>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<stack>
#include<set>
#include<utility>
using namespace std;
#define ll long long
//#define MAX 999999
//#define pi 3.14159265359

bool vowel(char a)
{
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        return true;
    else
        return false;
}

int main()
{
    char a,cons;
    while(a=getchar())
    {
        if(a==EOF)
            return 0;
        if(vowel(a))
        {
            while(isalpha(a))
            {
                cout<<a;
                a=getchar();
            }
            cout<< "ay";
        }
        else if(isalpha(a))
        {
            cons=a;
            a=getchar();
            while(isalpha(a))
            {
                cout<<a;
                a=getchar();
            }
            cout<< cons<< "ay";
        }
        cout<<a;
    }
    return 0;
}
