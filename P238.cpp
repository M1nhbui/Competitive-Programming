#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int main()
{
    int n;
    cin >> n;
    int arr[MAX];
    int arr1[MAX];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr1[i] = 23 - arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 27)
        {
            cout << " ";
        }
        if (arr[i] == 25)
        {
            cout << "y";
        }
        else
        {
            cout << char(97 + arr1[i]);
        }
    }
    return 0;
}