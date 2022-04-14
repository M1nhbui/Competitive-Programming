#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    for (long long i = 0; i < x.size(); i++)
    {
        if (x[i] <= 'Z' && x[i] >= 'A')
            x[i] += 32;
    }
    cout << x;
}