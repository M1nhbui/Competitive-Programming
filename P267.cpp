#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    long long sobe, sttsobe = 0;
    cin >> sobe;
    for (long long i = 1; i < x; i++)
    {
        long long in;
        cin >> in;
        if (sobe > in)
        {
            sobe = in;
            sttsobe = i;
        }
    }
    cout << sttsobe;
}