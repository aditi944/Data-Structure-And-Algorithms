class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int curr = 0;
        char currchar;
        for (int i = 0; i < strs[0].size(); i++)
        {
            currchar = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j][i] != currchar){
                return strs[0].substr(0, curr);
                }
            }
            curr++;
        }
        return strs[0];
    
    }
};
