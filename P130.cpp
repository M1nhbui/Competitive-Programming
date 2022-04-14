#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    char c;
    cin >> a >> b >> c;
    if (c == 43)
    {
        cout << setprecision(2) << fixed << a + b;
        return 0;
    }
    if (c == 45)
    {
        cout << setprecision(2) << fixed << a - b;
        return 0;
    }
    if (c == 42)
    {
        cout << setprecision(2) << fixed << a * b;
        return 0;
    }
    if (c == 47)
    {
        cout << setprecision(2) << fixed << a / b;
        return 0;
    }
    return 0;
}