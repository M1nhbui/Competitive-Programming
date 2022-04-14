#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100
#define ll long long

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"

void read()
{
    // ios_base::sync_with_stdio(false);
    // freopen("name.inp", "r", stdin);
    // freopen("name.out", "w", stdout);
    // freopen(pathio "input.txt", "r", stdin);
    // freopen(pathio "output.txt", "w", stdout);
    // cin.tie(NULL);
    // cout.tie(NULL);
    return;
}

int n;
int a[20][20], f[20][40000];
// định nghĩa mảng f[i][j] : i là thành phố đang xét, j là dãy bit biểu thị những thành phố đã đi qua

void set0(int &a, int i)
{
    a &= ~(1 << i);
}

int getbit(int a, int i)
{
    return ((a >> i) & 1);
}

// void set1(int &a, int i)
// {
//  a |= (1 << i);
// }

int main()
{
    read();
    cin >> n;
    FOR(i, 1, n)
    {
        FOR(j, 1, n)
        {
            cin >> a[i][j];
        }
    }
    // 100001
    int ans = 1e9;
    FOR(j, 0, (1 << n) - 1)
    {
        // chọn một dãy bit
        FOR(i, 1, n)
        {
            int d = j;
            set0(d, n - i);
            // kiểm tra xem thành phố i có phải bit 1
            if (d == 0)
            {
                f[i][j] = 0;
            }
            else
            {
                f[i][j] = 1e9;
            }
            // ở vòng for này ta duyệt các bit 1 coi như là điểm trước khi đến thành phố thứ i và chi phí thấp nhất khi đến thành phố thứ i là min của các thành phố có bit 1
            FOR(k, 0, n - 1)
            {
                d = j;
                // kiểm tra xem bit thứ k trong dãy bit j có phải là bit 1 hay ko và bit n - k phải khác với bit i
                if (!getbit(d, k) || n - k == i)
                {
                    continue;
                }
                // set bit i trong dãy bit j = 0
                set0(d, n - i);
                // tìm min f[i][j] với công thức này
                f[i][j] = min(f[i][j], f[n - k][d] + a[n - k][i]);

            }
        }
    }
    // min chi phí của mõi thành phố i khi tất cả các bit còn lại là 1 vì khi đó đồng nghĩa với tất cả các thành phố đã được đi qua
    FOR(i, 1, n)
    {
        ans = min(ans, f[i][(1 << n) - 1]);
    }
    cout << ans;
    return 0;
}
