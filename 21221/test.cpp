#include <iostream>
#include <stdio.h>
#include <vector>
#define For(i, a, b) for (int i = a; i <= b; i++)

using namespace std;
int m, r, a[22], lt[22];
vector<int> t, p;

void nhap()
{
    //    freopen("LASCALE.INP","r",stdin);
    //  freopen("LASCALE.OUT","w",stdout);
    scanf("%d", &m);
}
void xuly()
{
    lt[0] = 1;
    For(i, 1, 19) lt[i] = lt[i - 1] * 3;
    while (m)
    {
        a[r] = m % 3;
        r++;
        m /= 3;
    }
    For(i, 0, r) if (a[i] == 1) p.push_back(lt[i]);
    else if (a[i] == 2)
    {
        t.push_back(lt[i]);
        a[i + 1]++;
    }
    else if (a[i] == 3) a[i + 1]++;
}

int main()
{
    nhap();
    xuly();

    printf("%d ", (int)t.size());
    For(i, 0, (int)t.size() - 1) printf("%d ", t[i]);
    printf("\n%d ", (int)p.size());
    For(i, 0, (int)p.size() - 1) printf("%d ", p[i]);
    return 0;
}