#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double sum = 0;
    long double sopt = 0;
    long long j;
    cin >> j;
    while (j--)
    {
        long double pt;
        cin >> pt;
        if (pt > 0)
        {
            sum += pt;
            sopt += 1;
        }
    }
    if (sopt == 0)
    {
        cout << "0.00";
        return 0;
    }
    cout << fixed << setprecision(2) << sum / sopt;
}