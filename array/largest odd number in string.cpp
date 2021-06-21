class Solution {
public:
    string largestOddNumber(string num) {
        int i;
        int max=0,str=0;
        /*string max="";
        
        string str="";*/
        string s="";
        int new_num=0;
        if(stoi(num)%2==1){
            return num;
        }
        for(i=0;i<num.length();i++){
            for(int j=i+1;j<num.length();j++){
                if(i%2==1){
                    if(i>max)
                        max=i;
                }
            str=stoi(num.substr(i,j))%2;
                
                if((str)==0){
                    continue;
                }
                else if(str==1) { 
                    new_num=stoi(num.substr(i,j));
                    if(new_num>max){
                        max=new_num;
                    }
                    s=to_string(max);
                }
                
                
                
            }
            }
        
        return s;
            
}
        
    
};








//correct
class Solution {
public:
    string largestOddNumber(string num) {
        int i;
        int len=num.length();
        for(i=len-1;i>=0;i--)
        {
            if((num[i]-48)%2==0){
                num.erase(i,1);
            }
            else break;
        }
        return num;
}
        
    
};


//count sub islands
//You are given two m x n binary matrices grid1 and grid2 containing only 0's (representing water) and 1's (representing land). An island is a group of 1's connected 4-directionally (horizontal or vertical). Any cells outside of the grid are considered water cells.

//An island in grid2 is considered a sub-island if there is an island in grid1 that contains all the cells that make up this island in grid2.

//Return the number of islands in grid2 that are considered sub-islands.
