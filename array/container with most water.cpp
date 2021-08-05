class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size();
        int i=0,j=n-1;
        int max=0;
        while(i<=j){

            int m=min(height[i],height[j]);
            int smax=(j-i)*m;
            if(smax>max){
                max=smax;
            }
            if(m==height[i])i++;
            else j--;
        }
        return max;
        
    }
};
