class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
int low=0,high=n-1;
while(low<high){
int mid=low+((high-low)>>1);

        if(nums[mid]<nums[high]) high=mid;
        
        else if(nums[mid]>nums[high]) low=mid+1;
        
    }
    return nums[low];
    }
};
