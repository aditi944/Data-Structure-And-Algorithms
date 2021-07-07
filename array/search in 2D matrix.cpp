class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int row=matrix.size()-1;
        int col=matrix[0].size()-1;
        int i=0;
        bool ans=false;
        int j=col;
      
        while(i<=row&&j>=0){
          
            if(target==matrix[i][j]){
                ans=true;
                break;
                
            }
            if(target<matrix[i][j]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    
    }
};
