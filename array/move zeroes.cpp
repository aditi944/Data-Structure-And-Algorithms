//move zeroes to the end without disturbing the order of non-zero elements
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int right=0,left=0;
        int temp;
        while(right<n){

            if(nums[right]==0){
                ++right;
            }
            else{

                temp=nums[right];
                nums[right]=nums[left];
                nums[left]=temp;
                ++right;
                ++left;
            }
        }
    
    
    }
};
