#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    long long sum = 0;
    for (long long i = 1; i < x; i++)
    {
        sum += i;
        if (sum == x)
        {
            cout << "YES";
            return 0;
        }
        if (sum > x)
        {
            cout << "NO";
            return 0;
        }
    }
}