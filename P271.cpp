#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;
    long long store[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> store[i];
    }

    for (long long i = 0; i < n; i++)
    {
        long long j = i - x;
        while (j < 0)
            j += n;
        cout << store[j] << " ";
    }
}