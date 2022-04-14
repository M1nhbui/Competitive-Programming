#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 1000005
#define MAX 100

#define ll long long
#define int long long
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
int a[MAXN];
int f[MAXN], g[MAXN];
int l[MAXN], r[MAXN];

void tinh()
{
    stack<int> s;
    s.push(0);
    a[0] = 1e9;
    a[n + 1] = 1e9;
    FOR(i, 1, n)
    {
        while (!s.empty() && a[s.top()] < a[i])
        {
            s.pop();
        }
        l[i] = s.top();
        s.push(i);
    }
    while (!s.empty())
    {
        s.pop();
    }
    s.push(n + 1);
    FOD(i, n, 1)
    {
        while (!s.empty() && a[s.top()] <= a[i])
        {
            s.pop();
        }
        r[i] = s.top();
        s.push(i);
        // cout << l[i] << " " << r[i] << EL;
        f[i] = (i - l[i]) * (r[i] - i);
    }
}

void tinh1()
{
    stack<int> s;
    s.push(0);
    a[0] = 0;
    a[n + 1] = 0;
    for (int i = 1; i <= n; i++)
    {
        while (!s.empty() && a[s.top()] > a[i])
        {
            s.pop();
        }
        l[i] = s.top();
        s.push(i);
    }
    while (!s.empty())
    {
        s.pop();
    }
    s.push(n + 1);
    FOD(i, n, 1)
    {
        while (!s.empty() && a[s.top()] >= a[i])
        {
            s.pop();
        }
        r[i] = s.top();
        s.push(i);
        g[i] = (i - l[i]) * (r[i] - i);
    }
}

signed main()
{
    read();
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    tinh();
    tinh1();
    int ans = 0;
    FOR(i, 1, n)
    {
        ans += (f[i] - g[i]) * a[i];
    }
    cout << ans;
    return 0;
}