#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int arr[MAX];
    int a;
    for (int i = 0; i < MAX; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            a = i;
            break;
        }
    }
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}