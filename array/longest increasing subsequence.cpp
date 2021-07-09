//Given an integer array nums, return the length of the longest strictly increasing subsequence.

//A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, [3,6,2,7] is a subsequence of the array [0,3,1,6,2,2,7].
  class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
         if (nums.size() <= 1)
            return nums.size();
        
        vector<int> dp(nums.size());
        dp[0] = 1;
        
        for (int i=0; i<nums.size(); i++) {
            int maxi = 0;
            
            for (int j=0; j<i; j++) {
                if (nums[j] < nums[i]) {
                    maxi = max(maxi, dp[j]);
                }
            }
            dp[i] = maxi+1;
        }
        
        return *max_element(dp.begin(), dp.end());
        
    }
};
