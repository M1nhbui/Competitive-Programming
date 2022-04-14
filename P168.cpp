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
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}