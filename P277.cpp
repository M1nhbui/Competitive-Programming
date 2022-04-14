#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;
#define MAXN 105
#define MAX 100
#define ll long long
#define ull unsigned long long
#define ldb long double
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
#define sp setprecision
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define pathio "D:/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

int m, n, a[MAXN][MAXN], d[MAXN][MAXN];

void checkRow(int i)
{
    for (int j = 1; j <= n; j++)
        if (a[i][j] == 1)
            return;

    for (int j = 1; j <= n; j++)
        d[i][j] = 1;
}

void checkCol(int j)
{
    for (int i = 1; i <= m; i++)
        if (a[i][j] == 1)
            return;

    for (int i = 1; i <= m; i++)
        d[i][j] = 1;
}
void code()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    for (int i = 1; i <= m; i++)
        checkRow(i);

    for (int j = 1; j <= n; j++)
        checkCol(j);

    int sum = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            sum += d[i][j];
    }
    cout << sum;
    return;
}

int main()
{
    freopen(lfi);
    freopen(lfo);
    cin.tie(0);
    cout.tie(0);

    code();

    fclose(stdin);
    fclose(stdout);
    return 0;
}