#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    long long x;
    cin >> x;
    long long array[MAX];
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i < x; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }

    for (int i = 0; i < x; i++)
    {
        cout << array[i] << ' ';
    }
}