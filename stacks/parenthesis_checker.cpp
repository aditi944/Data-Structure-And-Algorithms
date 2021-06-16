class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int flag=1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'||s[i]=='}'||s[i]==']'){
               if(st.empty())
                   flag=0;
            
            else{
               
                char temp=st.top();
                
                if(s[i]==']'&&(temp=='('||temp=='{'))
                    flag=0;
                
               if(s[i]==')'&&(temp=='{'||temp=='['))
                    flag=0;
                
               if(s[i]=='}'&&(temp=='['||temp=='('))
                    flag=0;
                st.pop();
                
            }
            }
            
             
            
        }
                        if(!st.empty())
                            flag=0;
        
                        if(flag==1)
                        {return true;}
        
                        else 
                            return false;
        
    }
};