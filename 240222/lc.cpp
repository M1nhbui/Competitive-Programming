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

ll n, m;
struct MATRIX
{
    ll a[3][3] = {{0, 1, 0}, {0, 0, 1}, {1, 1, 1}};
};

MATRIX operator*(MATRIX a, MATRIX b)
{
    MATRIX c;
    FOR(i, 0, 2)
    {
        FOR(j, 0, 2)
        {
            c.a[i][j] = 0;
            FOR(k, 0, 2)
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
    cin >> n >> m;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    else if (n == 2)
    {
        cout << 2;
        return 0;
    }
    else if (n == 3)
    {
        cout << 4;
        return 0;
    }
    MATRIX x = fibo(n - 3);
    cout << (x.a[2][0] * 1 % m + x.a[2][1] * 2 % m + x.a[2][2] * 4 % m) % m;
    return 0;
}