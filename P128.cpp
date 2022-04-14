#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (a + b + c >= 15)
    {
        if (a > 5 && b > 5 && c > 5)
        {
            cout << "Excellent";
        }
        else
        {
            cout << "Medium";
        }
    }
    else
    {
        cout << "Fail";
    }
}