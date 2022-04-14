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

int n, q, a[MAXN], s[MAXN], cnt = 0;

bool check(int x, int y, int t)
{
    if (s[t] - s[y - 1] <= x)
    {
        return true;
    }
    return false;
}

void solve(int x, int y)
{
    cnt = 0;
    // int l = y - 1, r = n;
    int tmp = x;
    while (x > 0)
    {
        int l = y - 1, r = n;
        while (l < r)
        {
            int mid = (l + r + 1) / 2;
            // cout << check(x, y, mid) << " " << mid << endl;
            if (check(x, y, mid))
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        x -= (s[l] - s[y - 1]);
        // cout << tmp << " ";
        // cout << x << " " << y << " " << l << endl;
        if (tmp != x)
            cnt += (l - y + 1);
        y = l + 2;
        if (y > n)
        {
            break;
        }
        tmp = x;
    }
    cout << cnt << endl;
}

int main()
{
    read();
    cin >> n >> q;
    FOR(i, 1, n)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    FOR(i, 1, q)
    {
        int x, y;
        cin >> x >> y;
        solve(x, y);
    }
    return 0;
}