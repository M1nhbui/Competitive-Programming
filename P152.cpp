#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int arr[MAX];
    int count[MAX];
    count[0] = 0;
    count[1] = 0;
    count[2] = 0;
    count[3] = 0;
    count[4] = 0;
    int copy[MAX];
    int copy2[MAX];
    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        copy2[i] = arr[i];
    // }
    // sort(copy, copy + 5);
    // for (int i = 0; i < 5; i++)
    // {
    // }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                count[i]++;
            }
        }
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << count[i];
    // }
    sort(count, count + 5);
    // cout << count[4];
    sort(copy2, copy2 + 5);
    
    cout << arr[a];
    return 0;
}