//Input: nums = [1,2,3,4,5,6,7], k = 3
//Output: [5,6,7,1,2,3,4]

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
       k = k % (nums.size());
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
      
    }
};
