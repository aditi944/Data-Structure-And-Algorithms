class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
         unordered_map<int,int>s;
        int k=1;
        vector<int>ans1=arr;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(s.find(arr[i])==s.end()){
                s[arr[i]]=k;
                k++;
            }
        }
 
        vector<int>ans;
        for(int child:ans1){
            ans.push_back(s[child]);
        }
        return ans;
        
    
    }
};
