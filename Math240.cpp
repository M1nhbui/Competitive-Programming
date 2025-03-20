#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n == 1)
        return 5;
    return n + 2 * f(n - 1);
}

int main()
{
    cout << f(3);
}