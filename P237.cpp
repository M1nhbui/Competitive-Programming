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
            if (cal == 'a' || cal == 'b' || cal == 'c')
            {
                cal += 26;
            }
            cout << char(cal - 3);
        }
        else
            cout << x[i];
    }
}