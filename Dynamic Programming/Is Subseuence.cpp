class Solution {
public:
    bool isSubsequence(string s, string t) {
            int curr = 0; 
        
        
        for (int i = 0; i < t.size(); i++){
            if (t[i] == s[curr]){
                curr++; 
                
                if (curr == s.size()){
                    return true; 
                }
            }
        }
        
        return s=="" || false;
    }
};
