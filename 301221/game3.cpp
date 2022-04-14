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

ll a[3000][3000], f[3000][3000];
ll x[3000][3000];
ll m, n, k;

int main()
{
    read();
    cin >> m >> n >> k;
    FOR(i, 1, m)
    {
        FOR(j, 1, n)
        {
            cin >> x[i][j];
        }
    }
    memset(f, 1e9 + 7, sizeof(f));

    FOR(i, 1, n)
    {
        if (x[1][i] != 0)
        {
            a[1][i] = x[1][i] + k;
            f[1][i] = x[1][i] + k;
        }
        else
        {
            a[1][i] = k - k / 2;
            f[1][i] = k - k / 2;
        }
    }
    FOR(i, 2, m)
    {
        FOR(j, 1, n)
        {
            if (x[i][j] == 0)
            {
                a[i][j] = (max({a[i - 1][j], a[i - 1][j - 1], a[i - 1][j + 1]}) + x[i][j]) - (max({a[i - 1][j], a[i - 1][j - 1], a[i - 1][j + 1]}) + x[i][j]) / 2;
                f[i][j] = (min({f[i - 1][j], f[i - 1][j - 1], f[i - 1][j + 1]}) + x[i][j]) - (min({f[i - 1][j], f[i - 1][j - 1], f[i - 1][j + 1]}) + x[i][j]) / 2;
            }
            else
            {
                a[i][j] = max({a[i - 1][j], a[i - 1][j - 1], a[i - 1][j + 1]}) + x[i][j];
                f[i][j] = min({f[i - 1][j], f[i - 1][j - 1], f[i - 1][j + 1]}) + x[i][j];
            }
        }
    }
    ll cnt1 = 0, cnt2 = 1e9;
    FOR(i, 1, n)
    {
        cnt1 = max(cnt1, a[m][i]);
        cnt2 = min(cnt2, f[m][i]);
    }
    cout << cnt2 << endl
         << cnt1;
    return 0;
}