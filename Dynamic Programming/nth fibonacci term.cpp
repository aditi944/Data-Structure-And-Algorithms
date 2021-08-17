class Solution {
private:
    int memo[38];
public:
    int tribonacci(int n) {
        if(memo[n]!=0) return memo[n];
        if(n==0) return 0;
        if(n <=2 ) return 1;
        
        memo[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return memo[n];
    }
};