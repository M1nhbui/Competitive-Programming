#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "zero";
        return 0;
    }
    int x = n % 10;
    if (n <= 10)
    {
        switch (x)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        case 0:
            cout << "ten";
            break;
        default:
            break;
        }
        return 0;
    }
    if (n < 20 && n > 10)
    {
        switch (x)
        {
        case 1:
            cout << "eleven";
            break;
        case 2:
            cout << "twelve";
            break;
        case 3:
            cout << "thirteen";
            break;
        case 4:
            cout << "fourteen";
            break;
        case 5:
            cout << "fifteen";
            break;
        case 6:
            cout << "sixteen";
            break;
        case 7:
            cout << "seventeen";
            break;
        case 8:
            cout << "eighteen";
            break;
        case 9:
            cout << "nineteen";
            break;
        case 0:
            cout << "twenty";
            break;
        default:
            break;
        }
        return 0;
    }
    if (n < 30 && n >= 20)
    {
        cout << "twenty";
        switch (x)
        {
        case 1:
            cout << "-one";
            break;
        case 2:
            cout << "-two";
            break;
        case 3:
            cout << "-three";
            break;
        case 4:
            cout << "-four";
            break;
        case 5:
            cout << "-five";
            break;
        case 6:
            cout << "-six";
            break;
        case 7:
            cout << "-seven";
            break;
        case 8:
            cout << "-eight";
            break;
        case 9:
            cout << "-nine";
            break;
        case 0:
            break;
        default:
            break;
        }
        return 0;
    }
    if (n < 40 && n >= 30)
    {
        cout << "thirty";
        switch (x)
        {
        case 1:
            cout << "-one";
            break;
        case 2:
            cout << "-two";
            break;
        case 3:
            cout << "-three";
            break;
        case 4:
            cout << "-four";
            break;
        case 5:
            cout << "-five";
            break;
        case 6:
            cout << "-six";
            break;
        case 7:
            cout << "-seven";
            break;
        case 8:
            cout << "-eight";
            break;
        case 9:
            cout << "-nine";
            break;
        case 0:
            break;
        default:
            break;
        }
        return 0;
    }
    if (n < 50 && n >= 40)
    {
        cout << "forty";
        switch (x)
        {
        case 1:
            cout << "-one";
            break;
        case 2:
            cout << "-two";
            break;
        case 3:
            cout << "-three";
            break;
        case 4:
            cout << "-four";
            break;
        case 5:
            cout << "-five";
            break;
        case 6:
            cout << "-six";
            break;
        case 7:
            cout << "-seven";
            break;
        case 8:
            cout << "-eight";
            break;
        case 9:
            cout << "-nine";
            break;
        case 0:
            break;
        default:
            break;
        }
        return 0;
    }
    if (n < 60 && n >= 50)
    {
        cout << "fifty";
        switch (x)
        {
        case 1:
            cout << "-one";
            break;
        case 2:
            cout << "-two";
            break;
        case 3:
            cout << "-three";
            break;
        case 4:
            cout << "-four";
            break;
        case 5:
            cout << "-five";
            break;
        case 6:
            cout << "-six";
            break;
        case 7:
            cout << "-seven";
            break;
        case 8:
            cout << "-eight";
            break;
        case 9:
            cout << "-nine";
            break;
        case 0:
            break;
        default:
            break;
        }
        return 0;
    }
    if (n < 70 && n >= 60)
    {
        cout << "sixty";
        switch (x)
        {
        case 1:
            cout << "-one";
            break;
        case 2:
            cout << "-two";
            break;
        case 3:
            cout << "-three";
            break;
        case 4:
            cout << "-four";
            break;
        case 5:
            cout << "-five";
            break;
        case 6:
            cout << "-six";
            break;
        case 7:
            cout << "-seven";
            break;
        case 8:
            cout << "-eight";
            break;
        case 9:
            cout << "-nine";
            break;
        case 0:
            break;
        default:
            break;
        }
        return 0;
    }
    if (n < 80 && n >= 70)
    {
        cout << "seventy";
        switch (x)
        {
        case 1:
            cout << "-one";
            break;
        case 2:
            cout << "-two";
            break;
        case 3:
            cout << "-three";
            break;
        case 4:
            cout << "-four";
            break;
        case 5:
            cout << "-five";
            break;
        case 6:
            cout << "-six";
            break;
        case 7:
            cout << "-seven";
            break;
        case 8:
            cout << "-eight";
            break;
        case 9:
            cout << "-nine";
            break;
        case 0:
            break;
        default:
            break;
        }
        return 0;
    }
    if (n < 90 && n >= 80)
    {
        cout << "eighty";
        switch (x)
        {
        case 1:
            cout << "-one";
            break;
        case 2:
            cout << "-two";
            break;
        case 3:
            cout << "-three";
            break;
        case 4:
            cout << "-four";
            break;
        case 5:
            cout << "-five";
            break;
        case 6:
            cout << "-six";
            break;
        case 7:
            cout << "-seven";
            break;
        case 8:
            cout << "-eight";
            break;
        case 9:
            cout << "-nine";
            break;
        case 0:
            break;
        default:
            break;
        }
        return 0;
    }
    if (n < 100 && n >= 90)
    {
        cout << "ninety";
        switch (x)
        {
        case 1:
            cout << "-one";
            break;
        case 2:
            cout << "-two";
            break;
        case 3:
            cout << "-three";
            break;
        case 4:
            cout << "-four";
            break;
        case 5:
            cout << "-five";
            break;
        case 6:
            cout << "-six";
            break;
        case 7:
            cout << "-seven";
            break;
        case 8:
            cout << "-eight";
            break;
        case 9:
            cout << "-nine";
            break;
        case 0:
            break;
        default:
            break;
        }
        return 0;
    }
    return 0;
}