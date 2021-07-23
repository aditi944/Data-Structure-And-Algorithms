class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x<=3) return 1;
        int start=1;
        int last=x/2;
        long long mid;
        while(start<=last){
            mid=(start+last)/2;
            if((mid*mid<=x) && ((mid+1)*(mid+1)>x)) return mid;
            else if(mid*mid>x) last=mid-1;
            else start=mid+1;
        }
        return 0;
    }
};
