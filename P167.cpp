#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

int main()
{
    int n;
    cin >> n;
    int arr[MAX];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[n - 2] << " " << arr[1];
    return 0;
}