#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int arr[MAX];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 5);
    cout << arr[1];
    return 0;
}