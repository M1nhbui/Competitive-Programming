#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c = "";
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                // Đã tính
                bool check = 1;
                for (int k = 0; k < c.size(); k++)
                {
                    if (a[i] == c[k])
                        check = 0;
                }
                if (check)
                    c = c + a[i];
            }
        }
    }

    cout << c.size();
}