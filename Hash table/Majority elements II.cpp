//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=nums.size();
        unordered_map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second > n/3){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};
