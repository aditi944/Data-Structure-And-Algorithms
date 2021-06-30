class Solution {
public:
    int hammingWeight(uint32_t n) {
      unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
};

//lightweight solution
class Solution {
public:
    int hammingWeight(uint32_t n) {
   int count=0;
    while(n!=0)
    {
        n=n & (n-1);
        count++;
    }
    return count;
    }
};
