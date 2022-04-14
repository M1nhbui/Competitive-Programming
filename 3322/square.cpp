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
#define fi first
#define se second
#define int long long

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

pair<int, int> a[MAXN];

signed main()
{
    read();
    FOR(i, 1, 4)
    {
        cin >> a[i].fi >> a[i].se;
    }
    sort(a + 1, a + 1 + 4);
    if (a[1].fi == a[2].fi && a[3].fi == a[4].fi && a[1].se == a[3].se && a[2].se == a[4].se && sqrt((a[1].fi - a[2].fi) * (a[1].fi - a[2].fi) + (a[1].se - a[2].se) * (a[1].se - a[2].se)) == sqrt((a[3].fi - a[4].fi) * (a[3].fi - a[4].fi) + (a[3].se - a[4].se) * (a[3].se - a[4].se)))
    {
        cout << (a[1].fi - a[3].fi) * (a[1].fi - a[3].fi);
    }
    else
    {
        cout << -1;
    }
    return 0;
}