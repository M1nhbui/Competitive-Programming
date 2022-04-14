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

ll n, m;
ll a[105][105], f[105][105];

int main()
{
    read();
    cin >> n >> m;
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            cin >> a[i][j];
        }
    }
    FOR(i, 1, n)
    {
        FOR(j, 0, m)
        {
            f[i + 1][j] = max(f[i][j], f[i + 1][j]);
            FOR(k, 1, m - j)
            {
                f[i + 1][j + k] = max(f[i + 1][j + k], f[i][j] + a[i][k]);
            }
        }
    }
    cout << f[n + 1][m];
    return 0;
}