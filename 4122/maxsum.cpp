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

ll n, k, a[2000][2000], f[2000][2000];

int main()
{
    bool check = false;
    bool check2 = false;
    ll ans = -1e9;
    read();
    cin >> n >> k;
    FOR(i, 1, n)
    {
        FOR(j, 1, n)
        {
            cin >> a[i][j];
        }
    }
    FOR(i, 1, n)
    {
        f[0][i] = 0;
    }
    FOR(i, 1, n)
    {
        f[0][i] = 0;
    }
    FOR(z, 0, k)
    {
        FOR(i, 1, n)
        {
            FOR(j, 1, n)
            {
                f[i][j] = max(max(f[i][j - 1], f[i - 1][j]), max(f[i][j + 1], f[i + 1][j])) + a[i][j];
            }
        }
    }
    cout << f[n][n];
    return 0;
}