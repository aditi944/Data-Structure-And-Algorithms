class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v1;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int ans=target-nums[i];
            if(mp.count(ans)>0 && mp[ans]!=i){
                v1.push_back(i);
                v1.push_back(mp[ans]);
                break;
            }
        }
        return v1;
    }
};