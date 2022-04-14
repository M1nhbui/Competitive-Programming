#include <bits/stdc++.h>

#define MAXN 900005
#define MAX 100
#define ll long long
#define ull unsigned long long
#define ldb long double
#define pll pair<long long, long long>;
#define pii pair<int, int>;
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

using namespace std;

ll l, r;

long long sum(ll n)
{
    ll sum = 1;
    FOR(i, 2, sqrt(n))
    {
        if (n % i == 0)
        {
            sum += i;
            if (n / i != i)
            {
                sum += n / i;
            }
        }
    }
    return sum;
}

void code()
{
    ll count = 0;
    cin >> l >> r;
    FOR(i, l, r)
    {
        if (sum(i) > i)
        {
            count++;
        }
    }
    cout << count;
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