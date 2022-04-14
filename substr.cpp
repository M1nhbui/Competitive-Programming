#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 2000005
#define MAX 100

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= (int)r; i++)
#define FOD(i, r, l) for (int i = r; i >= (int)l; i--)
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

int z[MAXN];

int main()
{
    read();
    string a, b;
    cin >> a >> b;
    a = b + a;
    a = " " + a;
    int n = a.size();
    int m = b.size();
    int l = -1, r = -1;
    for (int i = 2; i <= n; i++)
    {
        z[i] = 0;
        if (i <= r)
        {
            z[i] = min(r - i + 1, z[i - l + 1]);
        }
        while (i + z[i] <= n && a[i + z[i]] == a[z[i] + 1])
        {
            z[i]++;
        }
        if (i + z[i] - 1 > r)
        {
            l = i;
            r = i + z[i] - 1;
        }
    }
    // cout << n - 1 << " ";
    // int cnt = 0;
    FOR(i, m + 1, n - 1)
    {
        // cout << z[i] << " ";
        if (z[i] >= m)
        {
            cout << i - m << " ";
        }
    }
    // cout << cnt;
    return 0;
}

// aabaaaaaabaaaaabaaaa
// aabaaaaaabaaaaabaaaa
