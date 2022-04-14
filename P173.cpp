#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}