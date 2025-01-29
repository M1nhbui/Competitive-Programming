#include <bits/stdc++.h>
using namespace std;

long long giaithua(long long n)
{
    if (n == 1)
        return n;
    return n * giaithua(n - 1);
}

int main()
{
    long long n;
    cin >> n;
    cout << giaithua(n);
}