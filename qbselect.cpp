#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
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
int a[10][10020];
int f[10020][20];
int bit[] = {0, 1, 2, 4, 5, 8, 9, 10};

int main()
{
    read();
    cin >> n;
    int mx = -1e9;
    FOR(i, 1, 4)
    {
        FOR(j, 1, n)
        {
            cin >> a[i][j];
            mx = max(mx, a[i][j]);
        }
    }
    if (mx < 0)
    {
        cout << mx;
        return 0;
    }
    FOR(i, 1, n)
    {
        FOR(j, 0, 7)
        {
            int d = bit[j];
            f[i][bit[j]] = -1e9;
            int tmp = 0;
            FOR(k, 1, 4)
            {
                d = bit[j];
                d = d >> (4 - k);
                if (d & 1 == 1)
                {
                    tmp += a[k][i];
                    // cout << k << " ";
                }
            }
            // cout << endl;
            FOR(l, 0, 7)
            {
                if ((bit[j] & bit[l]) != 0)
                {
                    continue;
                }
                // cout << bit[l] << ", " << bit[j] << "    ";
                f[i][bit[j]] = max(f[i - 1][bit[l]] + tmp, f[i][bit[j]]);
            }
            // cout << endl;
        }
    }
    int ans = -1e9;
    FOR(i, 0, 7)
    {
        ans = max(ans, f[n][bit[i]]);
    }
    cout << ans;
    return 0;
}