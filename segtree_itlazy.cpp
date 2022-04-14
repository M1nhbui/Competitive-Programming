#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100
#define int long long

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"

int n, a[MAXN], q, ST[MAXN], cong[MAXN];

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

void update1(int id, int l, int r, int i, int v)
{
    if (i < l || r < i)
    {
        return;
    }
    if (l == r)
    {
        ST[id] = v;
        return;
    }
    int mid = (l + r) / 2;
    update1(id * 2, l, mid, i, v);
    update1(id * 2 + 1, mid + 1, r, i, v);
    ST[id] = max(ST[id * 2], ST[id * 2 + 1]);
}

void update(int id, int l, int r, int bot, int top, int v)
{
    ST[id] += cong[id];
    cong[id * 2] += cong[id];
    cong[id * 2 + 1] += cong[id];
    cong[id] = 0;
    if (top < l || bot > r)
    {
        return;
    }
    if (bot <= l && r <= top)
    {

        cong[id * 2] += v;
        cong[id * 2 + 1] += v;
        ST[id] += v;
        return;
    }
    int mid = (l + r) / 2;
    update(id * 2, l, mid, bot, top, v);
    update(id * 2 + 1, mid + 1, r, bot, top, v);
    ST[id] = max(ST[id * 2], ST[id * 2 + 1]);
}

int get(int id, int l, int r, int u, int v)
{
    ST[id] += cong[id];
    cong[id * 2] += cong[id];
    cong[id * 2 + 1] += cong[id];
    cong[id] = 0;
    if (v < l || r < u)
    {
        return -1e9;
    }
    if (u <= l && r <= v)
    {
        return ST[id];
    }
    int mid = (l + r) / 2;
    int leftChild = get(id * 2, l, mid, u, v);
    int rightChild = get(id * 2 + 1, mid + 1, r, u, v);
    return max(leftChild, rightChild);
}

signed main()
{
    read();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        update1(1, 1, n, i, a[i]);
    }
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int x, y, z, v;
        cin >> x;
        if (x == 1)
        {
            cin >> y >> z >> v;
            update(1, 1, n, y, z, v);
        }
        else if (x == 2)
        {
            cin >> y >> z;
            cout << get(1, 1, n, y, z) << endl;
        }
    }
    return 0;
}
