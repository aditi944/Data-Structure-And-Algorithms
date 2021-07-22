class Solution
{
    public:
    bool keypair(vector<int> A, int N, int X)
    {
        unordered_map<int,int>ans;
        int sum=0;
 
        for(int i=0;i<N;i++){
            sum=X-A[i];
            if(ans.find(sum)!=ans.end()){
                return true;
            }
            else{
                ans[A[i]]=i;
                }
        }
        return false;// Your code goes here
    }
};
