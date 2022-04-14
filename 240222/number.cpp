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

string s;
ll cnt = 0;
ll a[MAXN];
vecll e;

bool check(ll d)
{
    if (d < 2)
    {
        return false;
    }
    if (d == 2 || d == 3)
    {
        return true;
    }
    FOR(i, 2, sqrt(d))
    {
        if (d % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve(ll n, ll x)
{
    if (x == n + 1)
    {
        ll tmp = 0;
        FOR(i, 1, n)
        {
            if (a[i] == 1)
            {
                tmp = (tmp * 10 + int(s[i] - '0'));
            }
        }
        // cout << tmp << endl;
        if (check(tmp))
        {
            // cnt++;
            e.pb(tmp);
        }
        return;
    }
    FOR(i, 0, 1)
    {
        a[x] = i;
        solve(n, x + 1);
    }
}

int main()
{
    read();
    int t;
    cin >> t;
    FOR(i, 1, t)
    {
        e.clear();
        cnt = 1;
        int k;
        cin >> k;
        s = to_string(k);
        int n = s.size();
        s = " " + s;
        solve(n, 1);
        reverse(s.begin(), s.end());
        s = " " + s;
        solve(n, 1);
        if (e.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        sort(e.begin(), e.end());
        FOR(j, 1, int(e.size() - 1))
        {
            if (e[j] != e[j - 1])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}