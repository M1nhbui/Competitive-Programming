#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int main()
{
    int n;
    cin >> n;
    int arr[100];
    int count = 0;
    for (int i = 0; i < MAX; i++)
    {
        arr[i] = n % 2;
        n = floor(n / 2);
        count++;
        if (n == 0)
        {
            break;
        }
    }
    for (int i = count - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}