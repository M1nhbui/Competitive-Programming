#include <iostream>
#include <cmath>
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
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        if (prime(a))
            count++;
    }
    cout << count;
}