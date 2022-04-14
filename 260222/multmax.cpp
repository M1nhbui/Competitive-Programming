#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"
#define fi first
#define se second

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

ll n, m, a[600][600];

int main()
{
    read();
    cin >> n >> m;
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            cin >> a[i][j];
        }
    }
    if (m == 2)
    {
        ll ans = -1e17;
        ll l;
        FOR(i, 1, n)
        {
            if (a[i][1] * a[i][2] > ans)
            {
                l = i;
                ans = a[i][1] * a[i][2];
            }
        }
        cout << ans << " " << l;
        return 0;
    }
    ll ans = -1e17;
    ll l;
    FOR(i, 1, n)
    {
        ll max1, max2, min1, min2;
        sort(a[i] + 1, a[i] + 1 + m);
        {
            max1 = a[i][m];
            max2 = a[i][m - 1];
            min1 = a[i][1];
            min2 = a[i][2];
        }
        if (max(max1 * max2, min1 * min2) > ans)
        {
            ans = max(max1 * max2, min1 * min2);
            l = i;
        }
    }
    cout << ans << " " << l;
    return 0;
}