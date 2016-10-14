#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int MAX = 1e6 + 7;

int prime[55555];
int prime_list[55555];
int k=1;
void sieve()
{
    prime[0]=prime[1]=1;
    for(int i=2;i<=sqrt(55555);i++)
    {
        if(!prime[i])
        {
            prime_list[k++]=i;
            for(int j=i+i;j<=55555;j+=i)
                prime[j]=1;
        }
    }
}

int main()
{
    sieve();
    int n;
    while(cin>>n &&n)
    {
        int c=0;
        for(int i=2;i<=n;i++)
        {
            if(!prime[i] && !prime[n-i] && i<=(n-i))
            {
               // cout<<i<< " "<<n-i<<endl;
                c++;
            }

            if(i>n)
                break;
        }
        cout<<c<<endl;
    }
    return 0;
}
