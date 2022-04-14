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

ll a[MAXN];

int main()
{
    read();
    ll n, k;
    cin >> n >> k;
    ll end = -1e9;
    FOR(i, 1, n)
    {
        ll x, y;
        cin >> x >> y;
        end = max(end, y);
        a[y] = x;
    }
    ll cnt = 0;
    FOR(i, 0, 2 * k)
    {
        cnt += a[i];
    }
    ll ans = cnt;
    FOR(i, 2 * k + 1, end)
    {
        cnt = cnt - a[i - (2 * k + 1)] + a[i];
        ans = max(cnt, ans);
    }
    cout << ans;
}