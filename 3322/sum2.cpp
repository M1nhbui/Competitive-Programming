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
#define int long long

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

int n, m, a[1000][1000], q, l1, l2, r1, r2, x, t[1000][1000];

signed main()
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
    cin >> q;
    FOR(i, 1, q)
    {
        cin >> l1 >> r1 >> l2 >> r2 >> x;
        FOR(j, l1, l2)
        {
            t[j][r1] += x;
            t[j][r2 + 1] -= x;
        }
    }
    FOR(i, 1, n)
    {
        FOR(j, 2, m)
        {
            t[i][j] += t[i][j - 1];
        }
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            cout << a[i][j] + t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}