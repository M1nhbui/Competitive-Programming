#include <bits/stdc++.h>
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

int main()
{
    long long k, n;
    cin >> n >> k;
    cout << giaithua(n) / (giaithua(k) * giaithua(n - k));
}