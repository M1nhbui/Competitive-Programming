#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b, c;
    cin >> a >> b >> c;
    long double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "No solution";
    }
    else if (delta > 0)
    {
        cout << fixed << setprecision(2) << (-b - sqrt(delta)) / 2 / a << " " << (-b + sqrt(delta)) / 2 / a;
    }
    else if (delta == 0)
    {
        cout << fixed << setprecision(2) << -b / 2 / a;
    }
}