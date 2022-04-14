#include <bits/stdc++.h>

#define MAX 100000
#define ll long long
#define ull unsigned long long
#define ldb long double
#define endl "\n"
#define sp setprecision
#define pathio "D:/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

long long giaithua(long long n, ll m)
{
    if (n == m)
        return n;
    return n * giaithua(n - 2, m);
}

void code()
{
    ll n, m;
    cin >> m >> n;
    if (n % 2 == 0)
    {
        if (m % 2 == 0)
        {
            cout << giaithua(n - 1, m + 1);
        }
        else
        {
            cout << giaithua(n - 1, m);
        }
    }
    else
    {
        if (m % 2 == 0)
        {
            cout << giaithua(n, m + 1);
        }
        else
        {
            cout << giaithua(n, m);
        }
    }
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