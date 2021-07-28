class Solution {
public:
    double myPow(double x, int n) {
       		// Optimal Solution Time O(logN) & Auxiliary Space O(logN)
        if(n==0) 
			return 1;
		// Using Binary Exponentiation(Time O(logN))
		// x^n=x^(n/2)*x^(n/2). So, recursive function is 
		// called logN times where y=x^(n/2) and function returns y*y
        double y = myPow(x,n/2);
        if(n%2==0)
            return y*y;
        else if(n < 0)
            return 1/x*y*y;
        else
            return x*y*y; 
    }
};
