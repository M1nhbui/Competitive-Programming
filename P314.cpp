#include <bits/stdc++.h>
using namespace std;

long long sotaothanh(long long n)
{
    if (n == 1)
        return 2;
    else if (n == 2)
        return 3;
    return sotaothanh(n - 1) + sotaothanh(n - 2);
}
int main()
{
    long long n;
    cin >> n;
    cout << sotaothanh(n);
}