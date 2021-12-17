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
ll a[1000][1000], f[1000][1000];

int main()
{
    read();
    ll n, m;
    cin >> m >> n;
    FOR(i, 1, m)
    {
        FOR(j, 1, n)
        {
            cin >> a[i][j];
            f[0][i] = -1e9;
            f[m + 1][i] = -1e9;
        }
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            ll tmp = max(f[j + 1][i - 1], f[j - 1][i - 1]);
            f[j][i] = a[j][i] + max(f[j][i - 1], tmp);
        }
    }
    ll ans = -1e9;
    FOR(i, 1, m)
    {
        ans = max(ans, f[i][n]);
    }
    cout << ans;
    return 0;
}