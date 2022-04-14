#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    getline(cin, x);
    int sotu = 1, tu;
    cin >> tu;
    for (long long i = 0; i < x.size(); i++)
    {
        if (x[i] == ' ' || x[i] == '.')
            sotu++;
        else if (sotu == tu)
            cout << x[i];
    }
}