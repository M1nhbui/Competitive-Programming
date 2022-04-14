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

ll a[200][200], F[200][200];

int main()
{
    read();
    ll n;
    cin >> n;
    FOR(i, 1, n)
    {
        FOR(j, 1, i)
        {
            cin >> a[i][j];
        }
    }
    F[1][1] = a[1][1];
    FOR(i, 1, n)
    {
        FOR(j, 1, i)
        {
            F[i][j] = max(F[i - 1][j], F[i - 1][j - 1]) + a[i][j];
        }
    }
    ll ans = -32001;
    FOR(i, 1, n)
    {
        ans = max(ans, F[n][i]);
    }
    cout << ans;
    return 0;
}