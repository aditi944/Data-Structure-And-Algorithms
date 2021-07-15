class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ret = 0;
      int n = nums.size();
      sort(nums.begin(), nums.end());
      for(int i = n - 1; i >= 0; i--){
         int right = i - 1;
         int left = 0;
         while(left < right){
            int sum = nums[left] + nums[right];
            if(sum > nums[i]){
               ret += right - left;
               right--;
            }else left++;
         }
      }
      return ret;
    }
};
