/*Given an integer array nums and an integer k, return true if nums has a continuous subarray of size at least two whose elements sum up to a multiple of k, or false otherwise.

An integer x is a multiple of k if there exists an integer n such that x = n * k. 0 is always a multiple of k..*/

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m={{0,-1}};
        int r=0;
        for(int i=0;i<nums.size();i++){
 
            r+=nums[i];
            if(k)r%=k;
            if(m.count(r)){
                if(i-m[r]>1)return true;
            }
            else {m[r]=i;}
            }
        return false;
    }
};
