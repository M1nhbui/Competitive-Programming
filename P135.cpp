#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int arr[MAX];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    int x = arr[0];
    int y = arr[1];
    int z = arr[2];
    if (x * x + y * y == z * z)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}