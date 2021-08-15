class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
          sort(nums.begin(), nums.end());
        vector<int> ans(nums.size());
        for(int i = 0; i <= nums.size() / 2; i++) {
            if(i * 2 < nums.size())
                ans[i * 2] = nums[i];
            if(i * 2 + 1 < nums.size() && i + (nums.size() + 1) / 2 < nums.size())
                ans[i * 2 + 1] = nums[i + (nums.size() + 1) / 2];
        }
        return ans;
    }
};
