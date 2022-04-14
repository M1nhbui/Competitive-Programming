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

const int K = 2;
ll mod;
ll a, b, m, k;

struct Matrix
{
    ll data[K][K] = {{1, 1}, {0, a % m}};
    ll *operator[](int i) { return data[i]; };
};

ll nhan(ll x, ll y, ll mod)
{
    if (y == 0)
    {
        return 0;
    }
    ll t = nhan(x, y / 2, mod);
    t = (t + t) % mod;
    if (y % 2)
    {
        t = (t + x) % mod;
    }
    return t;
}

Matrix operator*(Matrix a, Matrix b)
{
    Matrix c;
    FOR(i, 0, K - 1)
    {
        FOR(j, 0, K - 1)
        {
            c[i][j] = 0;
            FOR(k, 0, K - 1)
            {
                c[i][j] = (c[i][j] % mod + nhan(a[i][k], b[k][j], mod)) % mod;
            }
        }
    }
    return c;
}

Matrix operator^(Matrix a, ll n)
{
    if (n == 1)
    {
        return a;
    }
    Matrix t = (a ^ (n / 2));
    t = (t * t);
    if (n % 2)
    {
        t = (t * a);
    }
    return t;
}

int main()
{
    read();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> m >> k;
        if (k == 1)
        {
            cout << b % m << endl;
            continue;
        }
        mod = m;
        Matrix c;
        c[0][0] = b % m;
        c[0][1] = b % m;
        c[1][0] = 0;
        c[1][1] = 0;
        Matrix d;
        d = d ^ (k - 1);
        c = c * d;
        cout << c[0][1] % m << endl;
    }
    return 0;
}