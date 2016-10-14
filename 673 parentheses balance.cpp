#include<stdio.h>
#include <cstring>
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
stack<char>s;
int main()
{
    int t;
    char a[10000];

    cin>>t;
    getchar();
    while(t--)
    {
        while(!s.empty())
            s.pop();

        gets(a);

        for(int i=0;a[i];i++)
        {
            if(a[i]=='(' || a[i]== '[')
                s.push(a[i]);
            else
            {
                if(!s.empty())
                {
                    if((a[i]==')' && s.top()=='(') || (a[i]==']'&& s.top()=='['))
                        s.pop();
                }
                else
                    s.push(a[i]);
            }

        }

        if(s.empty())
            cout<< "Yes"<<endl;

        else
            cout<< "No"<<endl;
    }


    return 0;

}


