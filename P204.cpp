#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    bool g = true;
    for (long long i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        if (a < 0)
            g = false;
        if (g)
            sum += a;
    }
    cout << sum;
}
