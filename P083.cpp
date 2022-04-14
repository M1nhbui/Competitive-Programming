#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a;
    cin >> n;
    long long b = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a;
        b += i * a;
    }
    cout << b;
}