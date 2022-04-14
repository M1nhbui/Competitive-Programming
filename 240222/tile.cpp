#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"
#define fi first
#define se second

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

ll m = 1e9 + 7;
struct MATRIX
{
    ll a[2][2] = {{0, 1}, {2, 1}};
};

MATRIX operator*(MATRIX a, MATRIX b)
{
    MATRIX c;
    FOR(i, 0, 1)
    {
        FOR(j, 0, 1)
        {
            c.a[i][j] = 0;
            FOR(k, 0, 1)
            {
                c.a[i][j] = (c.a[i][j] + a.a[i][k] * b.a[k][j]) % m;
            }
        }
    }
    return c;
}

MATRIX fibo(ll n)
{
    MATRIX c;
    if (n == 1)
    {
        return c;
    }
    MATRIX t = fibo(n / 2);
    if (n % 2)
    {
        return t * t * c;
    }
    else
    {
        return t * t;
    }
}

int main()
{
    read();
    ll s;
    cin >> s;
    while (s--)
    {
        ll n;
        cin >> n;
        MATRIX x = fibo(n);
        cout << (x.a[0][0] + x.a[0][1]) % m << endl;
    }
    return 0;
}