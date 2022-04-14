#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    string x;
    cin >> x;
    int n = x.size();
    char a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == a)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}