class Solution {
public:
    string reverseOnlyLetters(string s) {
int j=s.length()-1;
        int i=0;
        while(i<j)
        {
             if(!isalpha(s[i]))
                i++;
             if(!isalpha(s[j]))
                j--;
           else if(isalpha(s[i]) && isalpha(s[j]))
            {
                char temp = s[j];
                s[j]=s[i];
                s[i]=temp;
                i++;
                j--;
            }
        }
        return s;
    }
};
