#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int main()
{
    int n, x, arr[MAX];
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}