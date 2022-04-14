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

ll a[MAXN];
ll n, k;

ll solve(int len)
{
    int sum = 0;
    FOR(i, 1, n)
    {
        sum += a[i] / len;
    }
    return sum;
}

int main()
{
    read();
    cin >> n >> k;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    ll r = int(1e9);
    ll l = 1;
    ll mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (solve(mid) < k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << r;
    return 0;
}