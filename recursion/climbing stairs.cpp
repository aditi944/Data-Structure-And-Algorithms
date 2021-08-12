class Solution {
public:
    int climbStairs(int n) {
       if(n<=2){

           return n;

       }

        int mx[n+1];

        mx[0]=0;

        mx[1]=1;

        mx[2]=2;

    for(int i=3;i<=n;i++)
    {
        mx[i] = mx[i-1] + mx[i-2];
    }
    return mx[n];
    }
};
