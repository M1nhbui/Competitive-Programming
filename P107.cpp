#include <iostream>
using namespace std;

int pt(long long x1, long long y1, long long x2, long long y2, long double &a, long double &b)
{
    int ma;
    if (x1 == x2 && y1 == y2)
    {
        ma = 1;
    }
    else if (x1 == x2)
    {
        ma = 2;
    }
    else
    {
        a = (y1 - y2) / (x1 - x2);
        b = y1 - a * x1;
        ma = 0;
    }
    return ma;
}

int main()
{
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    long double a12, b12, a23, b23;
    if (pt(x1, y1, x2, y2, a12, b12) == 1)
    {
        cout << "1";
    }
    else if (pt(x1, y1, x2, y2, a12, b12) == 2)
    {
        cout << (x1 == x3);
    }
    else
    {
        if (pt(x2, y2, x3, y3, a23, b23) == 1)
        {
            cout << "1";
        }
        else if (pt(x2, y2, x3, y3, a23, b23) != 2)
        {
            cout << (a12 == a23 && b12 == b23);
        }
    }
}



// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 100000
// #define ll long long
// #define lb long double

// int main()
// {
//     lb x1, y1, x2, y2, x3, y3;
//     cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//     if (y1 * y2 * y3 == 0)
//     {
//         if (y1 + y2 + y3 == 0)
//         {
//             cout << 1;
//         }
//         else
//         {
//             cout << 0;
//         }
//     }
//     else if (x1 / y1 == x2 / y2 && x2 / y2 == x3 / y3)
//     {
//         cout << 1;
//     }
//     else
//     {
//         cout << 0;
//     }
//     return 0;
// }