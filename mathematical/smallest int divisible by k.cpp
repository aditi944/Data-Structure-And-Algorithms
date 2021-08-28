class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0||k%5==0)return -1;
        int prev_rem=0;
        for(int n=1;n<=k;n++){
          prev_rem=(prev_rem*10+1)%k;  
            if(prev_rem==0)return n;
}
        return -1;
    }
};
