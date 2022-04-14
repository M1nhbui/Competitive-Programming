#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a[10000];
    long long m, n;
    cin >> m >> n;
    for (long long i = 0; i < 10000; i++)
    {
        a[i] = "Not found";
    }

    for (long long i = 0; i < m; i++)
    {
        long long id;
        string word;
        cin >> id >> word;
        a[id] = word;
    }
    for (long long i = 0; i < n; i++)
    {
        long long in;
        cin >> in;
        cout << a[in] << "\n";
    }
}