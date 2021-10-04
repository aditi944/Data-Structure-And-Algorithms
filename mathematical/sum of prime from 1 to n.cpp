//https://practice.geeksforgeeks.org/problems/sum-of-all-prime-numbers-between-1-and-n4404/1/?track=PG-Mathematics&batchId=457#
class Solution{
	public:
   	long long int prime_Sum(int n){
   	   
   	   bool prime[n + 1];
 
    // Create a boolean array "prime[0..n]"
    // and initialize all entries it as true.
    // A value in prime[i] will finally be
    // false if i is Not a prime, else true.
    memset(prime, true, n + 1);
 
    for (int p = 2; p * p <= n; p++) {
 
        // If prime[p] is not changed, then
        // it is a prime
        if (prime[p] == true) {
 
            // Update all multiples of p
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Return sum of primes generated through
    // Sieve.
    int sum = 0;
    for (int i = 2; i <= n; i++)
        if (prime[i])
            sum += i;
    return sum;// Code here
   	}    
};
