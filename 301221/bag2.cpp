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

ll n, m, f[1000][1000], a[MAXN];

int main()
{
    read();
    cin >> n >> m;
    FOR(i, 1, m)
    {
        cin >> a[i];
        f[i][0] = 1;
    }
    FOR(i, 1, m)
    {
        FOR(j, 1, n)
        {
            if (a[i] > j)
            {
                f[i][j] = f[i - 1][j];
            }
            else
            {
                f[i][j] = f[i - 1][j] + f[i][j - a[i]];
            }
        }
    }
    cout << f[m][n];
    return 0;
}