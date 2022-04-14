#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (c1 > c2)
    {
        cout << 2;
        return 0;
    }
    if (c1 < c2)
    {
        cout << 1;
        return 0;
    }
    if (c1 == c2)
    {
        if (b1 < b2)
        {
            cout << 1;
            return 0;
        }
        if (b1 > b2)
        {
            cout << 2;
            return 0;
        }
        if (b1 == b2)
        {
            if (a1 < a2)
            {
                cout << 1;
                return 0;
            }
            if (a1 > a2)
            {
                cout << 2;
                return 0;
            }
            if (a1 == a2)
            {
                cout << 1;
                return 0;
            }
        }
    }
    return 0;
}