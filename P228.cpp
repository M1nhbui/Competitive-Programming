#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    getline(cin, x);
    long long count = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] > 96 && x[i] < 123)
        {
            x[i] -= 32;
            count++;
        }
    }
    cout << count << "\n"
         << x;
}