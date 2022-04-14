#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int n;
    cin >> n;
    double arr[MAX];
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << setprecision(2) << fixed << sum/n;
    return 0;
}