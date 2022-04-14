#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double a, b, c, d;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (a == 1 && b == 0 && c == 1)
    {
        cout << "2";
    }
    else
    {
        if (a == 0 && b == 0 && c == 0)
            cout << "inf";
        if (a == 0 && b == 0 && c != 0)
            cout << "0";
        if (a == 0 && b != 0)
            cout << "1";
        if (a != 0 && d < 0)
            cout << "0";
        if (a != 0 && d == 0)
            cout << "1";
        if (a != 0 && d > 0)
            cout << "2";
    }
}