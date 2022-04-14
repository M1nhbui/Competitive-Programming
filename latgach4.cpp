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
    ios_base::sync_with_stdio(false);
    // freopen("name.inp", "r", stdin);
    // freopen("name.out", "w", stdout);
    // freopen(pathio "input.txt", "r", stdin);
    // freopen(pathio "output.txt", "w", stdout);
    cin.tie(NULL);
    cout.tie(NULL);
    return;
}

const int K = 2;
int mod = 111539786;

struct Matrix
{
    ll data[K][K] = {{0, 1}, {1, 1}};
    ll *operator[](int i) { return data[i]; };
};

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
                c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % mod;
            }
        }
    }
    return c;
}

Matrix operator^(Matrix a, int n)
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
        int n;
        cin >> n;
        Matrix c;
        c = c ^ (n + 1);
        cout << c[0][1] << endl;
    }
    return 0;
}
