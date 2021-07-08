class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
         int n = nums1.size();
        int m = nums2.size();
        // dp[i][j]: length of longest common subarray of A[0..i-1] and B[0..j-1] ending with A[i-1] and B[j-1]
        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        int len = 0;
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= m; ++j){
                if(nums1[i - 1] == nums2[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    len = max(len, dp[i][j]);
                }
            }
        }
        return len;
    }
};
