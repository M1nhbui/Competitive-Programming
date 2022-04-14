#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 1000005
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

int n, a[MAXN], s[MAXN];
vector<ll> v;

int main()
{
    read();
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    v.pb(1);
    int tmp = 1;
    FOR(i, 2, n)
    {
        if (a[tmp] < a[i])
        {
            v.pb(i);
            tmp = i;
        }
    }
    v.pb(n + 1);
    FOR(j, 0, v.size() - 2)
    {
        stack<int> sk;
        FOR(i, v[j] + 1, v[j + 1] - 1)
        {
            s[i] = 1;
            while (!sk.empty() && a[i] > a[sk.top()])
            {
                s[i] = max(s[i], s[sk.top()] + 1);
                sk.pop();
            }
            sk.push(i);
        }
    }
    int ans = 0;
    FOR(i, 1, n)
    {
        ans = max(ans, s[i]);
    }
    cout << ans;
    return 0;
}