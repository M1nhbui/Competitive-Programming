#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    for (long long i = 0; i < 70; i++)
    {
        a %= b;
        a *= 10;
    }
    cout << a / b;
}