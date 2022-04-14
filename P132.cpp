#include <bits/stdc++.h>
using namespace std;

bool prime(long long n)
{
    bool prime = n > 1;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}
int main()
{
    long long x, y;
    cin >> x >> y;
    long long z = abs(__gcd(x, y));
    if (x < y)
    {
        long long temp = x;
        x = y;
        y = temp;
    }
    if (prime(z))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}