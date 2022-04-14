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

ll m, n;
ll h[MAXN];
ll s[MAXN], f[MAXN],f2[MAXN];

int main()
{
    read();
    h[n + 1] = -1e9;
    cin >> m >> n;
    FOR(i, 1, n)
    {
        cin >> h[i];
    }
    FOR(i, 1, n)
    {
        cin >> s[i];
        f[i] = f[i - 1] + s[i];
    }
    ll ans = -1e9;
    FOR(i, 1, n)
    {
        FOR(j, i + 1, n)
        {
            if (h[j] <= h[i])
            {
                ans = max(ans, f[j - 1] - f[i - 1]);
                break;
            }
        }
    }
    f2[n + 1] = 0;
    FOD(i, n, 1)
    {
        f2[i] = f2[i + 1] + s[i];
    }
    FOD(i, n, 1)
    {
        FOD(j, i - 1, 1)
        {
            if (h[j] <= h[i])
            {
                ans = max(ans, f2[j + 1] - f2[i + 1]);
            }
        }
    }
    cout << ans;
    return 0;
}