//https://leetcode.com/problems/word-pattern/
class Solution {
public:
    bool wordPattern(string pattern, string s) {
         unordered_map<char,string>mp;
        set<string>se;
        vector<string>v;
        stringstream ss(s);//Used for breaking words ie if given let "i am a coder" than it convert it into
                           //i,am,a,coder without space each word of string get separated
        string word;
        
        while (ss >> word){//put all word of string s in vector
            v.push_back(word);
        }
        if(v.size()!=pattern.length()){
            return false;
        }
        for(int i=0;i<pattern.length();i++){
            if(mp.find(pattern[i])!=mp.end()){//check if p[i] already exist wether it is mapped to v[i] or not
                if(mp[pattern[i]]!=v[i]){
                    return false;
                }
            }
            else{
                if(se.count(v[i])>=1){// check if v[i] already exist if exist means v[i] is already mapped to someone else hence not further mapped to any other char
                    return false;
                }
                se.insert(v[i]);
                mp[pattern[i]]=v[i];
            }
        }
        return true;
    }
};
