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

ll luythua(ll x, ll n)
{
    if (n == 1)
    {
        return x;
    }
    return x * luythua(x, n - 1) % 10000;
}

int main()
{
    read();
    ll x, n;
    cin >> x >> n;
    if (n % 2 == 0)
    {
        cout << luythua(x, n / 2) * luythua(x, n / 2) % 10000;
    }
    else
    {
        cout << luythua(x, n / 2) * luythua(x, n / 2) * x % 10000;
    }
    return 0;
}