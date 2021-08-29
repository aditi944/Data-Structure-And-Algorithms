//https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/
#include <bits/stdc++.h>
using namespace std;

bool compare(const string &a,const string &b){
    int na=a.size(),nb=b.size();
    if(na==nb){
	//if the size of both strings is same
        for(int i=0;i<na;i++){
		//if the character in the first string is greater than the second one
            if(a[i]>b[i])
                return true;
			//if charcter in the second string is greater
            if(a[i]<b[i])
                return false;
        }
		//if both are same, preserver the order
        return false;
    }
	//return the string with larger size
    return a.size()>b.size();
}

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),compare);
        return nums[k-1];
    }
};
