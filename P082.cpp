#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c;
    d = 1;
    for (long long i = a; i <= b; i++)
    {
        d = d * (i % c);
        d %= c;
    }
    cout << d % c;
    return 0;
}