//Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

//Return the array in the form [x1,y1,x2,y2,...,xn,yn].

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
          int i=0;
        int j=n;
        vector<int> v;
        for(int k=0;k<n;k++){
            v.push_back(nums[i++]);
            v.push_back(nums[j++]);
        }
        return v;
    }
};
