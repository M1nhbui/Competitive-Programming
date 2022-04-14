#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= int(r); i++)
#define FOD(i, r, l) for (int i = r; i >= int(l); i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"
#define fi first
#define se second

int mod = 1e9 + 7;

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
struct MATRIX
{
    ll a[2][2] = {{0, 1}, {1, 1}};
};
MATRIX operator*(MATRIX a, MATRIX b)
{
    MATRIX c;
    FOR(i, 0, 1)
    FOR(j, 0, 1)
    {
        c.a[i][j] = 0;
        FOR(k, 0, 1)
        c.a[i][j] = (c.a[i][j] + a.a[i][k] * b.a[k][j]) % mod;
    }
    return c;
}
MATRIX fibo(ll n)
{
    MATRIX c;
    if (n == 1)
        return c;
    MATRIX t = fibo(n / 2);
    if (n % 2)
        return t * t * c;
    else
        return t * t;
}
int main()
{
    read();
    ll n;
    cin >> n;
    MATRIX ans = fibo(n + 1);
    cout << (ans.a[1][0] + ans.a[1][1] - 1) % mod;
    return 0;
}