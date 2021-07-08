//Given an integer array nums, return the maximum difference between two successive elements in its sorted form. If the array contains less than two elements, return 0.
  class Solution {
public:
    int maximumGap(vector<int>& nums) {
        vector<int>ans;
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int x=nums[i+1]-nums[i];
            ans.push_back(x);
        }
        return *max_element(ans.begin(), ans.end());
        
    }
};
