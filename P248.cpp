#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    long long count = 0;
    for (long long i = 0; i < x.size(); i++)
    {
        count += (x[i] == 'n');
    }
    cout << count;
}