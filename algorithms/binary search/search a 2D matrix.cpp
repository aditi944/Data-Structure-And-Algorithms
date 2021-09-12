class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
   int row=0,column=matrix[0].size()-1;
        int n=matrix.size();
        while(row<n && column>=0){
            if(matrix[row][column] == target){
                return true;   //if targeted element found, then return true
            }
            else if(matrix[row][column] > target){
                column--;     //if current element is more than targeted element
            } 
            else{
                row++;    //if current element is less than targeted element
            }
        }
        
        return false;  
    }
};
