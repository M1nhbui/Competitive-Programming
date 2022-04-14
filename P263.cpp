#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

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
    cout << arr[0];
    return 0;
}