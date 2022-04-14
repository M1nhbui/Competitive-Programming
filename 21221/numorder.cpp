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

ll m, n, k;

ll tinh(ll t, ll m, ll n)
{
    ll ans = 0;
    FOR(i, 1, min(m, n))
    {
        if (i * i > t)
        {
            break;
        }
        ll tmp = sqrt(t - i * i);
        ans += tmp;
    }
    return ans;
}

int main()
{
    read();
    cin >> m >> n >> k;
    ll l = 1, r = m * m + n * n;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (tinh(mid, m, n) < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << l;
    return 0;
}