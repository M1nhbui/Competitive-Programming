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

ll mod, m;

ll f(ll a, ll n, ll mod)
{
    ll res = a, ans = 0;
    while (n)
    {
        if (n % 2)
            ans = (ans + res) % mod;
        res = (res + res) % mod;
        n /= 2;
    }
    return ans;
}

ll bruh(ll a, ll n)
{
    ll res = a, ans = 1;
    while (n)
    {
        if (n % 2)
        {
            ans = f(ans, res, mod);
        }
        res = f(res, res, mod);
        n /= 2;
    }
    return ans;
}

ll lmaoo(ll a, ll n)
{
    ll res = a, ans = 1;
    while (n)
    {
        if (n % 2)
            ans = ans * res % mod;
        res = res * res % mod;
        n /= 2;
    }
    return (ans + mod) % mod;
}
ll damn(ll p, ll alpha)
{
    if (alpha == 0)
        return 1;
    if (alpha == 1)
        return (p + 1) % mod;
    if (alpha % 2 == 1)
        return (f(p, damn(p, alpha - 1), mod) + 1) % mod;
    if (alpha % 2 == 0)
        return (f((bruh(p, alpha / 2) + 1), ((damn(p, alpha / 2) - 1 + mod) % mod), mod) + 1) % mod;
}
int main()
{

    ll T, x, n, m;
    cin >> T;
    while (T--)
    {
        cin >> x >> n >> m;
        ll p, q, len;
        mod = m;
        len = to_string(x).size();
        p = bruh(10, len);
        q = x % mod;
        ll f1 = q;
        ll ans = f(bruh(p, n - 1), f1, mod);
        ll ans1 = n >= 2 ? f(q, damn(p, n - 2), mod) : 0;
        ll ress = (ans + ans1) % mod;
        cout << ress << '\n';
    }
    return 0;
}