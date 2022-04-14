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

int n, a[MAXN], f[MAXN];
vector<pair<int, int>> t;

bool cmp(pair<int, int> x, pair<int, int> y)
{
    return x.se < y.se;
}

int main()
{
    read();
    cin >> n;
    a[0] = 0;
    a[1] = 1;
    FOR(i, 2, 100000)
    {
        if (i % 2 == 0)
        {
            a[i] = a[i / 2];
        }
        else
        {
            a[i] = a[i / 2] + a[i / 2 + 1];
        }
    }
    FOR(i, 1, n)
    {
        int x;
        cin >> x;
        t.pb({x, i});
    }
    sort(t.begin(), t.end());
    int index = 0;
    int mx = -1;
    // int tmp;
    FOR(i, 0, 100000)
    {
        if (mx < a[i])
        {
            mx = a[i];
        }
        while (i == t[index].fi)
        {
            t[index].fi = mx;
            index++;
        }
        if (index == n)
        {
            break;
        }
    }
    sort(t.begin(), t.end(), cmp);
    FOR(i, 0, t.size() - 1)
    {
        cout << t[i].fi << endl;
    }
    return 0;
}