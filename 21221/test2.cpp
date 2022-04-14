#include <bits/stdc++.h>

using namespace std;

#define ump unordered_map
#define MAXN 1000000
#define ll long long
#define ull unsigned long long
#define ldb long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define sz size
#define endl "\n"
#define sp setprecision
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    faster;
    ll n, a[MAXN], b[MAXN], c[MAXN], xuoi = 0, nguoc = 0;
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
        b[i] = 1e9;
        c[i] = 1e9;
    }
    FOR(i, 1, n)
    {
        ll x = lower_bound(b + 1, b + 1 + n, a[i]) - b;
        b[x] = a[i];
        xuoi = max(xuoi, x);
    }
    FOD(i, n, 1)
    {
        ll x = lower_bound(c + 1, c + 1 + n, a[i]) - c;
        c[x] = a[i];
        nguoc = max(nguoc, x);
    }
    cout << n - max(xuoi, nguoc);
}