#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int arr[MAX];
    for (int i = 0; i <= 2; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    cout << arr[0] << " " << arr[2];
    return 0;
}