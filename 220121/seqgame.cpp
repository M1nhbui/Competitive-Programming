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

ll n, d, a[MAXN], ans = 1e9, mx = -1e9, mn = 1e9;

int main()
{
    read();
    cin >> n >> d;
    FOR(i, 1, n)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    if (d == 0)
    {
        ans = 0;
        sort(a + 1, a + n + 1);
        ll k = a[(n + 1) / 2];
        FOR(i, 1, n)
        {
            ans += abs(k - a[i]);
        }
        cout << ans;
    }
    else if (d == 1)
    {
        FOR(i, mn - n, mx + n)
        {
            ll x = i, tmp = 0;
            FOR(j, 1, n)
            {
                tmp += abs(x - a[j]);
                x++;
            }
            ans = min(ans, tmp);
        }
        cout << ans;
    }
    return 0;
}