class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>ans;
        int i;
        for(i=0;i<nums.size();i++){
 
            ans[nums[i]]++;
        }
        for( i=1;i>0;i++){

            if(ans[i]==0){
 
                break;
            }
        }
        return i;
    }
};
