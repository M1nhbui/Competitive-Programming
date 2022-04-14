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

int n, q, a[100005];
int mod[100005];
int pf[100005][12];

signed main()
{
    read();
    cin >> n >> q;
    FOR(i, 1, n)
    {
        cin >> a[i];
        mod[i] = (a[i] % 10);
    }
    FOR(i, 0, 9)
    {
        FOR(j, 1, n)
        {
            pf[j][i] = pf[j - 1][i];
            if (mod[j] == i)
            {
                pf[j][i] += a[j];
            }
        }
    }
    FOR(i, 1, q)
    {
        int l, r, k;
        cin >> l >> r >> k;
        cout << pf[r][k] - pf[l - 1][k] << endl;
    }
    return 0;
}