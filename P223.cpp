#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    getline(cin, x);
    long long count = 0;
    long long times;
    cin >> times;
    for (int j = 0; j < times; j++)
    {
        char v;
        cin >> v;
        for (int i = 0; i < x.size(); i++)
            if (x[i] == v)
                count++;
        cout << count << "\n";
        count = 0;
    }
}