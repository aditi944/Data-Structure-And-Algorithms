class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
           set<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum;
        
        for(int i=0;i<n-3;++i) {
            if(i>0 and nums[i]==nums[i-1])  continue;   //Skip same values for index i to avoid duplicates
            for(int j=i+1;j<n-2;++j) {
                if(j>i+1 and nums[j]==nums[j-1])  continue;   //Skip same values for index j to avoid duplicates
                int left=j+1,right=n-1;
                
                while(left<right)   {   //2 pointer technique
                    sum=nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum>target)
                        right-=1;
                    else if(sum==target) {
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[left]);
                        t.push_back(nums[right]);
                        ans.insert(t);
                        left+=1;
                    }
                    else
                        left+=1;
                }
            }
        }
        vector<vector<int>> res;
        for(auto it: ans)
            res.push_back(it);
        return res;
        
    }
};
