//Input: nums = [8,1,2,2,3]
//Output: [4,0,1,1,3]

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n=nums.size();
        int count=0;
         vector<int>ans=nums;
        sort(nums.begin(),nums.end());
       
        for(int i=0;i<n;i++){
            ans[count++]=find(nums.begin(),nums.end(),ans[i])-nums.begin();
        }
        return ans;
    }
};
