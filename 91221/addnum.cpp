#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 1000005
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
ll n, x;
ll a[MAXN];
int main()
{
    read();
    cin >> n >> x;
    bool kt = false;
    FOR(i, 1, n)
    {
        cin >> a[i];
        if (a[i] == x)
        {
            kt = true;
        }
    }
    if (!kt)
    {
        a[n + 1] = x;
        n++;
    }

    sort(a + 1, a + n + 1);
    ll l = lower_bound(a + 1, a + n + 1, x) - a;
    ll r = upper_bound(a + 1, a + n + 1, x) - a - 1;
    FOR(i, 0, 1000000)
    {
        if (l <= (n + 1) / 2 && r >= (n + 1) / 2)
        {
            cout << i + !kt;
            return 0;
        }
        if ((n + 1) / 2 > r)
        {
            l++;
            r++;
        }
        n++;
    }
    return 0;
}