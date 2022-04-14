#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for (double i = 1; i <= n; i++)
    {
        sum += 1/i;
    }
    cout << setprecision(3) << fixed << sum;
    return 0;
}