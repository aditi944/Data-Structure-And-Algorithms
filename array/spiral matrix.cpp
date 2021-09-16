class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(); 
        vector<int> ans; 
        for (int k = m*n, i = 0, j = 0, di = 0, dj = 1; k; --k, i += di, j += dj) {
            ans.push_back(matrix[i][j]); 
            matrix[i][j] = 101; // mark "visited"
            if (!(0 <= i+di && i+di < m && 0 <= j+dj && j+dj < n && matrix[i+di][j+dj] <= 100)) {
                swap(di, dj); 
                dj *= -1; 
            }
        }
        return ans; 
    }
};
