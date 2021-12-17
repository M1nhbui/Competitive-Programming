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
int c, n, a[MAXN], f[20][6000];

int main()
{
//     read();
    cin >> c >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
        f[i][0] = 1;
    }
    int res = 0;
    sort(a + 1, a + 1 + n);
    f[0][0] = 0;
    f[1][a[1]] = 1;
    FOR(i, 1, n)
    {
        f[i][a[i]] = 1;
        FOR(j, 0, c)
        {
            int x = j - a[i];
            if (x < 0)
            {
                x = 5998;
            }
            if (f[i - 1][j] == 1 || f[i - 1][x] == 1)
            {
                f[i][j] = 1;
                res = max(res, j);
            }
        }
    }
    // FOR(i, 1, n)
    // {
    //     FOR(j, 0, c)
    //     {

    //         if (f[i][j] == 1)
    //             cout << i << " - " << j << ": " << f[i][j] << endl;
    //     }
    // }
    cout << res;
    return 0;
}
