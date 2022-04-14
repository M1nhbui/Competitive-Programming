#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int n, m, arr[MAX];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = n-1; i >= 0; i--)
    {
        int x = floor(m / arr[i]);
        cout << x << endl;
        m = m - arr[i] * x;
    }
    return 0;
}