#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    long long m = a1 * b2 - b1 * a2;
    long long n = b2 * c1 - c2 * b1;
    long long p = c2 * a1 - a2 * c1;
    if (m)
        printf("%0.1f %0.1f", double(n / m), double(p / m));
    else if (n == 0 || p == 0)
        printf("Inf");
    else
        printf("0");
}