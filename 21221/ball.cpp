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

ll a[MAXN], b[MAXN], m, n;

bool check(ll t)
{
    ll i = 0, j = n - t, dem = 0;
    FOR(k, 0, m - 1)
    {
        if (a[k] > b[i] && a[k] < b[j])
        {
            dem++;
            if (dem == t)
                return true;
            i++;
            j++;
        }
        else if (a[k] >= b[j])
            return false;
    }
    return false;
}

int main()
{
    read();
    cin >> m >> n;
    FOR(i, 0, m - 1)
    {
        cin >> a[i];
    }
    FOR(i, 0, n - 1)
    {
        cin >> b[i];
    }
    sort(a, a + m);
    sort(b, b + n);
    ll l = 1;
    ll r = n / 2;
    while (l <= r)
    {
        ll q = (l + r) / 2;
        if (check(q))
            l = q + 1;
        else
            r = q - 1;
    }
    cout << r;
    return 0;
}