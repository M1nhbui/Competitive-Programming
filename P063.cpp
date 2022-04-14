#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << "YES";
        return 0;
    }
    long long int arr[n + 5];
    arr[0] = 1;
    arr[1] = 1;
    while (arr[0] + arr[1] < n)
    {
        arr[2] = arr[0] + arr[1];
        arr[0] = arr[1];
        arr[1] = arr[2];
    }
    if (arr[0] + arr[1] == n)
    {
        cout << "YES";
    }
    if (arr[0] + arr[1] > n)
    {
        cout << "NO";
    }
}