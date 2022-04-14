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

int a[MAXN], f[MAXN];

int main()
{
    read();
    int n, l;
    cin >> n >> l;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    int ans = 1e9;
    FOR(i, 1, n)
    {
        f[i] = 1e9;
        FOR(j, 1, i - 1)
        {
            int sum = 0;
            FOR(k, j + 1, i)
            {
                sum += a[k];
            }
            if (sum <= l)
            {
                f[i] = min(f[i], f[j] + sum);
            }
        }
        ans = min(ans, f[i]);
    }
    cout << ans;
    return 0;
}