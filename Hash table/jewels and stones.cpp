//You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. 
//Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>ans;
        int count=0;
        for(int i=0;i<jewels.size();i++){
            ans[jewels[i]]++;
        }
        for(int i=0;i<stones.size();i++){
            if(ans[stones[i]]>0){
                count++;
            }

                              
        }
        return count;
    }
};
