//A square triple (a,b,c) is a triple where a, b, and c are integers and a2 + b2 = c2.

//Given an integer n, return the number of square triples such that 1 <= a, b, c <= n.
class Solution {
public:
    int countTriples(int n) {
          int ans = 0;
 
    // run nested loops for first two numbers.
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            int x = i * i + j * j;
 
            // third number
            int y = sqrt(x);
 
            // check if third number is perfect
            // square and less than n
            if (y * y == x && y <= n)
                ++ans;
        }
    }
 
    return 2*ans;
    }
};
