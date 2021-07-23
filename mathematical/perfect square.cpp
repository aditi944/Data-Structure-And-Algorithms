class Solution {
public:
    bool isPerfectSquare(int num) {
         if(num==1)
        {
            return true;
        }
        long l=1;
        long h=num;
        long mid;
        while(l<=h)
        {
            mid= (l+h)/2;
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid>num)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return false;  
    }
};
