#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
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

int n, m, w[MAXN], v[MAXN], a[MAXN],  f[200][20000];

int main()
{
    read();
    cin >> n >> m;
    FOR(i, 1, n)
    {
    	cin >> w[i] >> v[i] >> a[i];
    }
    FOR(i, 0, m)
    {
    	f[0][i] = 0;
    }
    FOR(i, 1, n)
    {
    	FOR(j, 0, m)
    	{
    		f[i][j] = max(f[i][j], f[i - 1][j]);
    		FOR(k, 0, a[i])
    		{
    			if (k * w[i] <= j)
    			{
    				if (f[i][j] < k * v[i] + f[i - 1][j - k * w[i]])
    				{
    					f[i][j] = k * v[i] + f[i - 1][j - k * w[i]];
    				}
    			}
    			else
    			{
    				break;
    			}
    		}
    	}
    }
    cout << f[n][m];
    return 0;
}