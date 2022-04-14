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

long long giaithua(long long n)
{
    long long ret = 1;
    for (int i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}

void code()
{
    ll n, k;
    cin >> k >> n;
    cout << giaithua(n) / (giaithua(k) * giaithua(n - k));
    return;
}

int main()
{
    // freopen(lfi);
    // freopen(lfo);
    cin.tie(0);
    cout.tie(0);

    code();

    fclose(stdin);
    fclose(stdout);
    return 0;
}