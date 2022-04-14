#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    string x;
    getline(cin, x);
    int count = 0;
    // bool a = b = c = d = e = f =g = h = i = k = j = l = m = n = o = p = q = r = s = t = u = v = w = s = y = z = false;
    bool arr[MAX];
    bool arr1[MAX];
    for (long long i = 0; i < x.size(); i++)
    {
        if (65 <= x[i] && 90 >= x[i])
        {
            arr[x[i] - 65] = false;
            arr1[i] = false;
        }
        else if (97 <= x[i] && 122 >= x[i])
        {
            arr[x[i] - 97] = false;
            arr1[i] = false;
        }
    }
    for (int i = 0; i < x.size(); i++)
    {
        if (!arr1[i])
        {
            count++;
        }
    }
    if (count == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}