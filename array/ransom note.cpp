//Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

//Each letter in magazine can only be used once in ransomNote.

 
  class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> alpha(26,0);
        for(int i=0; i<magazine.size(); i++)
            alpha[magazine[i]-'a']++;
        for(int i=0; i<ransomNote.size(); i++)
            alpha[ransomNote[i]-'a']--;
        for(int i=0; i<26; i++)
            if(alpha[i]<0)
                return false;
        return true;
        
    }
};
