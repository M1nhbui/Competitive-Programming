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
    long long n;
    cin >> n;
    cout << prime(n);
}