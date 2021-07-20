//An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

//Given an integer n, return true if n is an ugly number.

class Solution {
public:
    bool isUgly(int n) {
      if(!n) return false;
        unordered_map<int,int> mp;
        mp[2] = 0;mp[3] = 0;mp[5] = 0;
        while(mp.size()<=3)
        {
            if(n%2 == 0){ mp[2] = mp[2]+1;n =n/2;}
            else if(n%3 == 0) {mp[3]= mp[3]+1;n = n/3;}
            else  if(n%5 == 0) {mp[5]= mp[5]+1;n = n/5;}
            else mp[n] = 1;
            
        }
        if(mp.count(1)) return true;
        else return false;
    }
};
