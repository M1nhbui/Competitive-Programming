#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000

int main()
{
    int n;
    cin >> n;
    int arr[MAX];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
