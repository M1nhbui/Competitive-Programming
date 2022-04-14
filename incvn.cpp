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

ll a[MAXN], f[MAXN][55];

int main()
{
    read();
    ll n, k;
    cin >> n >> k;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    f[0][0] = 1;
    FOR(i, 1, n)
    {
        FOR(t, 1, k)
        {
            if (t <= i)
            {
                FOR(j, 0, i - 1)
                {
                    if (a[i] > a[j])
                    {
                        f[i][t] = (f[i][t] + f[j][t - 1]) % 5000000;
                    }
                }
                // cout << "i: " << i << "| t: " << t << " | f: " << f[i][t] << endl;
            }
        }
    }
    ll sum = 0;
    FOR(i, 1, n)
    {
        sum = (sum + f[i][k]) % 5000000;
    }
    cout << sum;
    return 0;
}