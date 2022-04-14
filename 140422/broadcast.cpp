#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 1000005
#define MAX 100
#define ll long long

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"

void read()
{
    // ios_base::sync_with_stdio(false);
    // freopen("name.inp", "r", stdin);
    // freopen("name.out", "w", stdout);
    freopen(pathio "input.txt", "r", stdin);
    freopen(pathio "output.txt", "w", stdout);
    cin.tie(NULL);
    cout.tie(NULL);
    return;
}

ll n, m, d[MAXN];
vector<ll> a[MAXN];
queue<ll> q;

ll solve()
{
	q.push(0);
    while(!q.empty())
    {
    	ll u = q.front();
    	q.pop();
    	for(auto v: a[u])
    	{
    		if (d[v] == -1)
    		{
    			d[v] = d[u] + 1;
    			if (v == n - 1)
    			{
    				return d[v];
    			}
    			q.push(v);
    		}
    	}
    }
    return -1;
}

int main()
{
    read();
    cin >> n >> m;
    FOR(i, 1, m)
    {
    	ll u, v;
    	cin >> u >> v;
    	a[u].pb(v);
    	d[v] = -1;
    }
    d[0] = 0;
    cout << solve();
    return 0;
}