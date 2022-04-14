#include <bits/stdc++.h>
using namespace std;

long long UCLN(long long x, long long y)
{
    //x>y
    if (x % y != 0)
    {
        return UCLN(y, x % y);
    }
    else
    {
        return y;
    }
}

int main()
{
    long long x, y;
    cin >> x >> y;
    if (x < y)
    {
        long long temp = x;
        x = y;
        y = temp;
    }
    cout << UCLN(x, y);
}