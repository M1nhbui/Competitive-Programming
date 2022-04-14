#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

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
ll a[900005];

int main()
{
    read();
    ll n;
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    reverse(a + 1, a + 1 + n);
    // vecll tmp;
    ll cnt = 0;
    FOR(i, 1, n)
    {
        if (i %  3 == 0)
        {
            continue;
        }
        cnt += a[i];
    }
    cout << cnt;
    return 0;
}