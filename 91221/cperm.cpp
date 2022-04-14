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

long long power(long long a, long long b, long long mod)
{
    if (b == 0)
        return 1;
    long long t = power(a, b / 2, mod);
    t = (t * t) % mod;
    if (b % 2 == 1)
        t = (t * a) % mod;
    return t;
}

int main()
{
    read();
    ll n;
    cin >> n;
    FOR(i, 1, n)
    {
        ll t;
        cin >> t;
        if (t < 2)
        {
            cout << 0 << endl;
        }
        else
        {
            ll res = power(2, t - 1, 1000000007) - 2;
            if (res < 0)
            {
                res += 1000000007;
            }
            cout << res << endl;
        }
    }
    return 0;
}