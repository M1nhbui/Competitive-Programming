#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int n;
    char arr[MAX];
    cin >> n;
    cin.getline(arr, MAX);
    int x = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(arr); j++)
        {
            cout << arr[j];
        }
        cout << endl;
    }
    return 0;
}