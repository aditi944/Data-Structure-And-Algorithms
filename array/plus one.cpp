//Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

//The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

//You may assume the integer does not contain any leading zero, except the number 0 itself.
  class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx=digits.size()-1;
        while(idx>=0){

            if(digits[idx]==9){

                digits[idx]=0;
            }
            else{
                digits[idx]+=1;
                return digits;
            }
            idx--;
        }
        digits.insert(digits.begin(),1);
        return digits;
        
    }
};
