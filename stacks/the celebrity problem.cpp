#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
   
    int celebrity(vector<vector<int> >& arr, int n) 
    {
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            st.push(i);
        }// code here 
        while(st.size()>=2){
            int t=st.top();
            st.pop();
            int s=st.top();
            st.pop();
            if(arr[t][s]==1)
            st.push(s);
            else st.push(t);
        }
        
        int pot=st.top();
        st.pop();
        for(int i=0;i<arr.size();i++){
            if(i!=pot){
                if(arr[i][pot]==0||arr[pot][i]==1){
                    return -1;
                }
            }
        }
        return pot;
    }
};

int main(){
    int l;
    cout<<"enter value of l"<<endl;
    cin>>l;
    while(l--){
        int n;
        cout<<"enter value of n"<<endl;
        cin>>n;
         
    vector<vector<int>>arr(n,vector<int> (n,0));
    cout<<"enter values of array containing 0 and 1 only"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
              cin>>arr[i][j];
        }
        
    }
    Solution ob;
    ob.celebrity(arr,n);
    }
}
