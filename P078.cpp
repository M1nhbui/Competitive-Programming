#include <bits/stdc++.h>
using namespace std;

long long tongchuso(long long n)
{
    long long chusocuoi = n % 10;
    if (n >= 10)
    {
        return tongchuso((n - chusocuoi) / 10) + chusocuoi;
    }
    else
    {
        return chusocuoi;
    }
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    long long a;
    while (cin >> a)
    {
        if (a % tongchuso(a) == 0)
            count++;
    }
    cout << count;
}