class Solution {
public:    
    vector<int> rotation(int n)
    {
       vector<int>ans;
       queue<int>q;
       int i;
       int arr[1010]={0};
       for(i=0;i<n;i++){
           q.push(i);
       }
       i=1;
       while(!q.empty()){
           int j=0;
           while(j<i){
               int x=q.front();
               q.pop();
               q.push(x);
               j++;
           }
           int x=q.front();
           if(arr[x]!=0){
               ans.push_back(-1);
               return ans;
           }
           q.pop();
           arr[x]=i;
           i++;
       }
           for(i=0;i<n;i++){
               ans.push_back(arr[i]);
           }
           return ans;
       
       // Code Heree
    }
};