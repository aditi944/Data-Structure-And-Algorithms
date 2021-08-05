class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        /*vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size();++k){
            if(nums[k]==nums[k-1])continue;
            if(nums[k]>0)break;
            int i=k+1,j=n-1;
            while(i<j){

                sum=nums[i]+nums[j]+nums[k];
                if(sum==0){

                    ans.push_back({nums[i],nums[k],nums[j]});
                    i++;
                    j--;
                    while(i<j&&nums[i]==nums[i-1])i++;
                    while(i<j&&nums[j]==nums[j+1])j--;
                }
                else if(sum>0)j--;
                else if(sum<0)i++;
            }
        }
        return ans;*/
        vector<vector<int>>ans;
int n = nums.size();
sort(nums.begin(),nums.end());

    int sum=0;
    for(int k=0;k<n-1;++k)
    {
         if(k!=0 && nums[k]==nums[k-1]) continue;
        if(nums[k] > 0) break;
    int start = k+1;
        int end = nums.size()-1;
        
        while(start<end)
        {
           sum = nums[k]+nums[start]+nums[end];
            if(sum==0)
            {
                
                ans.push_back({nums[k],nums[start],nums[end]});
                start++;
                end--;
                while(start < end && nums[start] == nums[start-1])
                    start++;
               
            }
            else if(sum>0)
            {
                end--;
            }
            else
            {
                start++;
            }
            
        }
    }
    return ans;
    }
};
