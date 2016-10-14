#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MP make_pair
#define vi vector<int>
#define pii pair <int,int>
#define vll vector<ll>
const ll MAX = 9999999;
#define MOD 100000007
int vis [1010][1010];
int A,B,N;
struct jug
{
    int a, b;
    vi v;
};
string message[] = {"fill A","fill B","empty A","empty B","pour A B","pour B A"};
void print_ans(vi v)
{
    for(int i = 0; i < v.size(); i++)
        cout<< message[v[i]]<<endl;
    cout<< "success"<<endl;
    return;
}
void bfs()
{
    vi v;
    jug now, next;
    now.a = 0, now.b = 0, now.v = v;
    queue < jug > q;
    q.push(now);
    while(!q.empty())
    {
        now = q.front();
        q.pop();
        int a = now.a, b = now.b;
        v = now.v;
        //cout<<a << " "<<b<<endl;
        if(a == N || b == N)
        {
            print_ans(v);
            return;
        }
        int tempa = 0, tempb = 0;
        if(a != A)
        {
            if(!vis[A][b])
            {
                vis[A][b] = 1;
                v.push_back(0);
                next.a = A, next.b = b, next.v = v;
                q.push(next);
                v.pop_back();
            }
            tempa = a + b;
            tempb = 0;
            if(tempa > A)
            {
                tempb = tempa - A;
                tempa = A;
            }
            if(b != 0 && !vis[tempa][tempb])
            {
                vis[tempa][tempb] = 1;
                v.push_back(5);
                next.a = tempa, next.b = tempb,next.v = v;
                q.push(next);
                v.pop_back();
            }
        }

        if(b != B)
        {
            if(!vis[a][B])
            {
                vis[a][B] = 1;
                v.push_back(1);
                next.a = a, next.b = B, next.v = v;
                q.push(next);
                v.pop_back();
            }
            tempa = 0;
            tempb = a + b;
            if(tempb > B)
            {
                tempa = tempb - B;
                tempb = B;
            }
            if(a != 0 && !vis[tempa][tempb])
            {
                vis[tempa][tempb] = 1;
                v.push_back(4);
                next.a = tempa, next.b = tempb,next.v = v;
                q.push(next);
                v.pop_back();
            }
        }
        if(a != 0 && !vis[0][b])
        {
            vis[0][tempb] = 1;
            v.push_back(2);
            next.a = 0, next.b = tempb, next.v = v;
            q.push(next);
            v.pop_back();
        }
        if(b != 0 && !vis[a][0])
        {
            vis[a][0] = 1;
            v.push_back(3);
            next.a = a,next.b = 0, next.v = v;
            q.push(next);
            v.pop_back();
        }
    }
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //FILE*f=freopen("input.txt","r",stdin);
    //FILE*o=freopen("output.txt","w",stdout);
    while(cin >> A >> B >> N)
    {
        memset(vis, 0, sizeof(vis));
        bfs();
    }
    //fclose(f);
    //fclose(o);

    return 0;
}
