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

int f[2005][2005];

int main()
{
    read();
    string s;
    cin >> s;
    int n = s.size();
    string p = s;
    reverse(p.begin(), p.end());
    s = " " + s;
    p = " " + p;
    string x = s, y = p;
    FOR(i, 1, n)
    {
        FOR(j, 1, n)
        {
            if (p[i] == s[j])
            {
                f[i][j] = f[i - 1][j - 1] + 1;
            }
            else
            {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
    int m = f[n][n];
    string tmp = "";
    FOR(i, 1, n)
    {
        int j = 1;
        x = s;
        y = p;
        while (j <= n)
        {
            if (x[i] == y[j])
            {
                tmp.pb(x[i]);
            }
        }
    }
    return 0;
}