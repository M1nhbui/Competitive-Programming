#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 3000005
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
#define se second
#define fi first

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

pair<ll, ll> a[MAXN];
ll n, k, s[MAXN], f[MAXN];

bool cmp(pair<ll, ll> x, pair<ll, ll> y)
{
    return x.se < y.se;
}

int main()
{
    read();
    s[0] = 0;
    cin >> n >> k;
    FOR(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se;
    }
    sort(a + 1, a + 1 + n, cmp);
    ll end = a[n].se;
    cout << end << endl;
    FOR(i, 1, n)
    {
        f[a[i].se] = a[i].fi;
    }
    s[0] = f[0];
    FOR(i, 1, end)
    {
        s[i] = s[i - 1] + f[i];
    }
    ll ans = -1e9;
    FOR(i, 0, end)
    {
        ll x = i - k - 1;
        if (x < 0)
        {
            x = 0;
        }
        ll tmp = s[i] - s[x];
        ll y = i + k;
        if (y > end)
        {
            y = end;
        }
        tmp += (s[y] - s[i]);
        ans = max(ans, tmp);
    }
    cout << ans;
    return 0;
}