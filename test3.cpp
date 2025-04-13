board[m][n];
f[m][n];
t[m][n] = ;
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        if (f[i - 1][j] + t[i - 1][j] >= f[i][j - 1] + t[i][j - 1]) {
            f[i][j] = f[i - 1][j] + board[i][j];
            t[i][j] = f[i - 1][j];
        }
        else if (f[i - 1][j] + t[i - 1][j] < f[i][j - 1] + t[i][j - 1]) {
            f[i][j] = f[i][j - 1] + board[i][j];
            t[i][j] = f[i][j - 1];
        }
        if (board[i][j] == 0) {
            if (t[i][j] > 0) {
                t[i][j]--;
                f[i][j]++;
            }
        }
    }
}
return f[m - 1][n - 1]