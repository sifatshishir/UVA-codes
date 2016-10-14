#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MP make_pair
#define vi vector<int>
#define vll vector<ll>
const ll MAX = 20000002;
#define MOD 1000000007

bool cmp(char a, char b)
{
	if(tolower(a) == tolower(b))
		return a<b;
	return tolower(a) < tolower(b);
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sort(s.begin(),s.end(),cmp);
        do
        {
            cout<<s<<endl;
        }
        while(next_permutation(s.begin(),s.end(),cmp));
    }

    return 0;
}
