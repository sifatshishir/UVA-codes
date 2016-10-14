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
bool chkPerfect(long long n);


int p_prime[]={2,3,5,7,13,17,19,31};
int not_perfect[]={11,23,29};


int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int next=0;
        long long pf=(pow(2,n-1))*(pow(2,n)-1);
        for(int i=0;i<8;i++)
            if(p_prime[i]==n)
            {
                cout<< "Perfect: "<<pf<< "!"<<endl;
                next=1;
            }
        if(next)
            continue;

        if(n==11 || n==23 || n==29)
            cout<< "Given number is prime. But, NO perfect number is available."<<endl;
        else
            cout<< "Given number is NOT prime! NO perfect number is available."<<endl;
    }

    return 0;
}

//checking perfect number

bool chkPerfect(long long n)
{
	long long i, total, limit = n / 2;

	total = 0;
	for (i = 1; i <= limit; ++i)
    {
		if (n % i == 0)
			total += i;
	}
	if (total == n)
		return true;
	return false;
}
