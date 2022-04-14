#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 1010
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

int n, q;
bool check[MAXN];
vector<pll> f[MAXN];

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

void dfs(int a, int b, int c)
{
    if (a == b)
    {
        cout << c << endl;
        return;
    }
    check[a] = true;
    for (auto i : f[a])
    {
        if (!check[i.first])
        {
            check[i.first] = 1;
            dfs(i.first, b, c + i.second);
        }
    }
}

int main()
{
    read();
    cin >> n >> q;
    FOR(i, 1, n - 1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        f[a].pb({b, c});
        f[b].pb({a, c});
    }
    FOR(i, 1, q)
    {
        int a, b;
        FOR(j, 0, 1010)
        {
            check[j] = 0;
        }
        cin >> a >> b;
        dfs(a, b, 0);
    }
    return 0;
}