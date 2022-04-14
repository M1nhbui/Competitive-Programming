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
ll n;
ldb a[MAXN];

bool BS(int l, int r, ldb x)
{
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (abs(a[mid] - x) < 1e-10)
        {
            return true;
        }
        if (a[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return false;
}

int main()
{
    read();
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    ll cnt = 0;
    FOR(i, 1, n - 1)
    {
        FOR(j, i + 1, n)
        {
            if (BS(i, j, (a[i] + a[j]) / 2))
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}