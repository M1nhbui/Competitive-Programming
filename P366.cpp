#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    for (long long i = 2; i <= n; i++)
    {
        sum += i * (i - 1);
    }
    cout << sum;
}