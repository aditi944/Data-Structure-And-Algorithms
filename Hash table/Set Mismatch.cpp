
//https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       vector<int> vec;
        unordered_map<int,int> mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second==2)
            {
                vec.push_back(i.first);
            }
            
        }
        
        for(int i=1;i<=nums.size();i++)
        {
            if(mp[i]==0)
            {
                vec.push_back(i);
            }
        }
        return vec;
    }
};
