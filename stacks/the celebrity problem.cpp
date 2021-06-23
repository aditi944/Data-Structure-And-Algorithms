
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        for(int i=0;i<M.size();i++){
            st.push(i);
        }// code here 
        while(st.size()>=2){
            int t=st.top();
            st.pop();
            int s=st.top();
            st.pop();
            if(M[t][s]==1)
            st.push(s);
            else st.push(t);
        }
        
        int pot=st.top();
        st.pop();
        for(int i=0;i<M.size();i++){
            if(i!=pot){
                if(M[i][pot]==0||M[pot][i]==1){
                    return -1;
                }
            }
        }
        return pot;
    }
};