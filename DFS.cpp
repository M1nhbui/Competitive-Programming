#include <vector>
#include <stdio.h>

using namespace std;

vector<int> e[100];
int danhDau[100];
int dem = 0;

void DFS(int u) {
    for (auto v : e[u]) {
        if (!danhDau[v]) {
            danhDau[v] = dem;
            DFS(v);
        }
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i=0; i<m; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        e[u].push_back(v);
        e[v].push_back(u);
    }

    for (int i=1; i<=n; i++) {
        if (!danhDau[i]) {
            dem++;
            danhDau[i] = dem;
            DFS(i);
        }
    }

    for (int i=1; i<=n; i++) {
        printf("%d %d\n", i, danhDau[i]);
    }
}

// 1: 5, 6, 2
// 2: 1, 3
// 3: 2, 4
// 4: 3

// Thành phần liên thông