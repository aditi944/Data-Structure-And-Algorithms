class Solution {
public:
    int uniquePaths(int m, int n) {
        int path[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                path[i][j] = (i == 0 || j == 0) ? 1 : path[i - 1][j] + path[i][j - 1];
            }
        }
        return path[m - 1][n - 1];
    }
};
