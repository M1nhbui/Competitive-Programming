#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    getline(cin, x);
    bool chuhoa = false, chuthuong = false, chuso = false, sochu = x.size() >= 8;

    if (x.size() < 4)
    {
        cout << "Invalid";
        return 0;
    }
    for (long long i = 0; i < x.size(); i++)
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
            chuhoa = true;
        else if (x[i] >= 'a' && x[i] <= 'z')
            chuthuong = true;
        else if (x[i] >= '0' && x[i] <= '9')
            chuso = true;
        else
        {
            cout << "Invalid";
            return 0;
        }
    }
    if (chuhoa && chuthuong && chuso && sochu)
        cout << "Strong";
    else
        cout << "Weak";
}