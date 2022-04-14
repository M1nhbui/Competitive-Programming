#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int main()
{
    long long n;
    cin >> n;
    long long arr[MAX];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long x;
    cin >> x;
    for (long long i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}