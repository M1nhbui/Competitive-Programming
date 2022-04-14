#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int main()
{
    int n;
    cin >> n;
    int arr[MAX];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arr1[MAX];
    for (int i = 0; i < n - 1; i++)
    {
        arr1[i] = abs(arr[i + 1] - arr[i]);
    }
    sort (arr1, arr1 + n - 1);
    cout << arr1[n - 2];
    return 0;
}