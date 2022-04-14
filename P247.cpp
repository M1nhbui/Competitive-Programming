#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    string x;
    getline(cin, x);
    int n = x.size();
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int temp = x[a - 1];
        x[a - 1] = x [b - 1];
        x[b - 1] = temp;
    }
    cout << x;
    return 0;
}