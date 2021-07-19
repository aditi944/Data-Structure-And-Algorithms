class Solution {
public:
    bool isHappy(int n) {
         while(n>9){
            int sum=0;
            int temp=n;
            while(temp!=0){
                sum+=(temp%10)*(temp%10);
                temp/=10;
            }
            n=sum;
        }
        if(n==1 || n==7) return true;
        return false;
    }
};