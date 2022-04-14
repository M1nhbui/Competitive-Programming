#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    getline(cin, x);
    for (long long i = 0; i < x.size(); i++)
    {
        int cal = x[i];
        if (cal < 123 && cal > 96)
        {
            cout << char(219 - cal);
        }
        else
        {
            cout << x[i];
        }
    }
}