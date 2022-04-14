#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    char arr[MAX];
    cin.getline(arr, MAX);
    int n = strlen(arr);
    sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
    for (int i = 0; i < n; i++)
    {
        cout << arr[n - i - 1];
    }
    cout << "\n";
    if (arr[0] == '0')
    {
        cout << arr[1] << arr[0];
        for (int i = 2; i < n; i++)
        {
            cout << arr[i];
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
    return 0;
}