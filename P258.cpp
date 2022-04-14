#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    char char1[MAX];
    cin.getline(char1, MAX);
    int n = strlen(char1);
    char char2[MAX];
    cin.getline(char2, MAX);
    int m = strlen(char2);
    if (m != n)
    {
        cout << 3;
        return 0;
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (char1[i] == char2[i])
        {
            flag = flag * 2;
        }
        if (char1[i] != char2[i])
        {
            if (char1[i] == char2[i] + 32 || char1[i] == char2[i] - 32)
            {
                flag = flag * 2 + 1;
            }
            else
            {
                cout << "3";
                return 0;
            }
        }
    }
    if (flag % 2 == 0)
    {
        cout << "1";
    }
    if (flag % 2 == 1)
    {
        cout << "2";
    }
    return 0;
}