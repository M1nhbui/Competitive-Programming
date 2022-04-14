#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100

#define int long long
#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= (int)r; i++)
#define FOD(i, r, l) for (int i = r; i >= (int)l; i--)
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

int n;
string s;
ll Pow[100000], h[100000], h2[100000];
const int base = 31;
const ll MOD = 1000000003;

ll getHash1(int i, int j)
{
    return (h[j] - h[i - 1] * Pow[j - i + 1] + MOD * MOD) % MOD;
}

ll getHash2(int i, int j)
{
    return (h2[i] - h2[j + 1] * Pow[j - i + 1] + MOD * MOD) % MOD;
}

bool checkchan(int t, int i)
{
    if (i - t - 1 < 1 || i + t > n)
    {
        return false;
    }
    if (getHash1(i - t - 1, i - 2) == getHash2(i + 1, i + t))
    {
        return true;
    }
    return false;
}

bool checkle(int t, int i)
{
    if (i - t < 1 || i + t > n)
    {
        return false;
    }
    if (getHash1(i - t, i - 1) == getHash2(i + 1, i + t))
    {
        return true;
    }
    return false;
}

signed main()
{
    read();
    cin >> n >> s;
    int len = s.size();
    s = " " + s;
    Pow[0] = 1;
    FOR(i, 1, len)
    {
        Pow[i] = (Pow[i - 1] * base) % MOD;
    }
    FOR(i, 1, len)
    {
        h[i] = (h[i - 1] * base + (s[i] - 'a' + 1)) % MOD;
    }
    FOD(i, len, 1)
    {
        h2[i] = (h2[i + 1] * base + (s[i] - 'a' + 1)) % MOD;
    }
    int g1 = 0, g2 = 0;
    FOR(i, 1, len)
    {
        int l = 0, r = len;
        while (l < r)
        {
            int mid = (r + l + 1) / 2;
            if (checkle(mid, i))
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        g1 = max(g1, l);
    }
    FOR(i, 1, len)
    {
        if (s[i] != s[i - 1])
        {
            continue;
        }
        int l = 0, r = len;
        while (l < r)
        {
            int mid = (r + l + 1) / 2;
            if (checkchan(mid, i))
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        g2 = max(g2, l);
    }
    if (g1 > g2)
    {
        cout << g1 * 2 + 1;
    }
    else
    {
        cout << g2 * 2 + 2;
    }
    return 0;
}