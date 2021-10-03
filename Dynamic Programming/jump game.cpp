//https://leetcode.com/problems/jump-game/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i,n=nums.size(),maxi=0;
        if(n==1) return 1;
        for(i=0;i<n;i++){
            if(maxi>=i) maxi=max(maxi, i+nums[i]);
        }
        return maxi>=(n-1);
    }
};
