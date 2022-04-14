#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100
#define ll long long

#define ll long long
#define ldb long double
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

int n, e, a[MAXN];

bool check(ldb x)
{
    ldb last = 0;
    FOR(i, 1, n)
    {
        if (a[i] - x > last)
        {
            return false;
        }
        last = a[i] + x;
    }
    if (last >= e)
    {
        return true;
    }
    return false;
}

int main()
{
    read();
    cin >> n >> e;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    ldb l = a[1], r = e;
    while (l < r)
    {
        ldb mid = (l + r + 1) / 2;
        if (!check(mid))
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << fixed << setprecision(10) << l;
    return 0;
}