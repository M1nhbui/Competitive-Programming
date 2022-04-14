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

ll n, k, a[MAXN], f[MAXN];
vecll m(MAXN);

ll mod = 14062008;

int main()
{
    read();
    cin >> n >> k;
    FOR(i, 1, k)
    {
        cin >> a[i];
        m[a[i]] = 1;
    }
    f[0] = 0;
    f[1] = 1;
    FOR(i, 2, n)
    {
        f[i] = 0;
        if (m[i] != 0)
        {
            // cout << i << ": " << f[i] << endl;
            continue;
        }
        if (m[i - 1] == 0)
        {
            f[i] = (f[i] + f[i - 1]) % mod;
        }
        if (m[i - 2] == 0)
        {
            f[i] = (f[i] + f[i - 2]) % mod;
        }
        if (f[i] == 0)
        {
            cout << 0;
            return 0;
        }
        // cout << i << ": " << f[i] << endl;
    }
    cout << f[n];
    return 0;
}