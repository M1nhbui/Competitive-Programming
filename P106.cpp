#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    int JMM = ((14 - month) / 12);
    int JMY = (year + 4800 - JMM);
    int JMD =
        day - 32045 + (((month + 12 * JMM - 3) * 153 + 2) / 5) + (JMY * 365) + (JMY / 4) - (JMY / 100) + (JMY / 400);
    switch (JMD % 7)
    {
    case 0:
        cout << "Monday";
        return 0;
    case 1:
        cout << "Tuesday";
        return 0;
    case 2:
        cout << "Wednesday";
        return 0;
    case 3:
        cout << "Thursday";
        return 0;
    case 4:
        cout << "Friday";
        return 0;
    case 5:
        cout << "Saturday";
        return 0;
    case 6:
        cout << "Sunday";
        return 0;
    }
}