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

ll a[MAXN][5], f[MAXN][5], n;

int main()
{
    read();
    ll t;
    cin >> t;
    FOR(z, 1, t)
    {
        cin >> n;
        FOR(i, 1, n)
        {
            FOR(j, 0, 2)
            {
                cin >> a[i][j];
            }
        }
        f[1][0] = a[1][0];
        f[1][1] = a[1][1];
        f[1][2] = a[1][2];
        FOR(i, 2, n)
        {
            FOR(j, 0, 2)
            {
                if (j == 0)
                {
                    f[i][j] = min(f[i - 1][1] + a[i][j], f[i - 1][2] + a[i][j]);
                }
                else if (j == 1)
                {
                    f[i][j] = min(f[i - 1][0] + a[i][j], f[i - 1][2] + a[i][j]);
                }
                else
                {
                    f[i][j] = min(f[i - 1][1] + a[i][j], f[i - 1][0] + a[i][j]);
                }
            }
        }
        ll ans = f[n][0];
        FOR(i, 1, 2)
        {
            ans = min(ans, f[n][i]);
        }
        cout << ans << endl;
    }
    return 0;
}