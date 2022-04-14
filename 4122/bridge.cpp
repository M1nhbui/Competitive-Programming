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

bool a[1002][1002];
int b[1002][4], m, n, k, f[1002][1002], x, y;

bool check(int i, int j)
{
    FOR(t, 1, k)
    {
        if (b[t][1] == i || b[t][2] == j)
        {
            return false;
        }
        if (b[t][1] >= i && b[t][2] <= j)
        {
            return false;
        }
        if (b[t][2] <= i && b[t][2] >= j)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    read();
    cin >> m >> n >> k;
    FOR(i, 1, k)
    {
        cin >> b[i][1] >> b[i][2];
    }
    FOR(i, 1, m)
    {
        f[i][n] = 0;
    }
    FOR(i, 1, n)
    {
        f[m][i] = 0;
    }
    do
    {
        cin >> x >> y;
        a[x][y] = true;
    } while (x != 0 || y != 0);
    FOR(i, 1, m)
    {
        FOR(j, 1, n)
        {
            if (check(i, j) && a[i][j] == true)
            {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]) + 1;
            }
            else
            {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
    cout << f[m][n];
    return 0;
}