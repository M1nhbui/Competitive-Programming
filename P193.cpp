#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long counta = 0, countb = 0, countc = 0, countelse = 0;
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
        switch (x[i])
        {
        case 'a':
            counta++;
            break;
        case 'b':
            countb++;
            break;
        case 'c':
            countc++;
            break;
        default:
            countelse++;
            break;
        }
    }
    cout << counta << "\n"
         << countb << "\n"
         << countc << "\n"
         << countelse - 1;
}