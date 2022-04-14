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
map<int, vector<int>> c;

int main()
{
    read();
    cin >> n;
    int ans = 0;
    c[0].pb(0);
    FOR(i, 1, n)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            s[i] = s[i - 1] + 1;
        }
        else
        {
            s[i] = s[i - 1] - 1;
        }
        c[s[i]].pb(i);
    }
    for (auto x : c)
    {
        if (x.se.size() > 1)
        {
            ans = max(ans, x.se[x.se.size() - 1] - x.se[0]);
        }
    }
    cout << ans;
    return 0;
}