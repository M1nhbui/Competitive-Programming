#include <bits/stdc++.h>
#define ll long long
#define MAXN 1005
using namespace std;

ll a[MAXN][MAXN];
ll b[MAXN];
ll n;

int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    if (n == 2)
    {
        cout << "1"
             << " " << a[1][2] - 1;
        return 0;
    }
    for (ll i = 1; i <= n - 2; i++)
        b[i] = (a[i][i + 1] + a[i][i + 2] - a[i + 1][i + 2]) / 2;

    for (ll i = n - 1; i <= n; i++)
        b[i] = (a[i - 1][i] + a[i - 2][i] - a[i - 2][i - 1]) / 2;
    if (n == 3)
    {
        cout << a[1][3] - b[3] << " " << a[2][3] - b[3] << " " << b[3];
        return 0;
    }
    for (ll i = 1; i <= n; i++)
        cout << b[i] << " ";
}