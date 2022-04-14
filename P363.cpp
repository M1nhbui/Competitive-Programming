#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, mod;
    cin >> n >> mod;
    long long sum = 0;
    long long curr = 1;
    for (long long i = 1; i <= n; i++)
    {
        curr *= i;
        curr %= mod;
        sum += curr;
        sum %= mod;
        // if (curr%mod==0) break;
    }

    cout << sum;
}