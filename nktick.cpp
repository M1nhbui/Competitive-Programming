#include <bits/stdc++.h>
using namespace std;
#define MAXN 60005

int n, t[MAXN], r[MAXN], f[MAXN];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    for (int i = 1; i < n; i++)
        cin >> r[i];
    f[1] = t[1];
    f[2] = min(t[1] + t[2], r[1]);
    for (int i = 3; i <= n; i++)
        f[i] = min(f[i - 1] + t[i], f[i - 2] + r[i - 1]);
    cout << f[n];
    return 0;
}