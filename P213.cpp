#include <bits/stdc++.h>
using namespace std;
#define MAX 100

long long int powREAL(long long int a, long long int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else if (b % 2 == 0)
    {
        long long int x = pow(a, b / 2);
        return x * x;
    }
    else
    {
        long long int x = pow(a, (b - 1) / 2);
        return x * x * a;
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << powREAL(x, n);
    return 0;
}