class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int>ans;
       ans.push_back(1);
       stack<int>st;
       st.push(0);
       for(int i=1;i<n;i++){
           while((!st.empty())&&(price[st.top()]<=price[i])){
               st.pop();
           }
           if(st.empty()){
               ans.push_back(i+1);
           }
           else ans.push_back(i-st.top());
         st.push(i);
       }
       return ans;
       
       
       // Your code here
    }
};
