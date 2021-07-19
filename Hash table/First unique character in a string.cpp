class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> M;   
        for(int i=0;i<s.length();i++){
            M[s[i]]++;
            
        }
        for(int i=0;i<s.length();i++){

            if(M[s[i]]==1){

            return i;
                break;
            }
        }
        return -1;
    }
};