//return the numRow of the pascal's triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> vec ;
        
        vec.push_back({1});
        
        if(numRows==1){    
            return vec;   
        }
        vec.push_back({1,1});               //we need this to construct more vectors
        for(int i=2; i<numRows; ++i){
            vector<int> v(i+1);             
            v[0]= 1;                      // we'll set start and end index equal to zero 
            v[i]=1;
            
            for(int j=1; j<i; ++j){
					 v[j] = vec[i-1][j-1]+vec[i-1][j];       // here we are accessing the previous vector (i-1) and now adding the adjacent pairs of that vector (look at the gif once thats exactly what we are doing here)
            }
            
            vec.push_back(v);       //here we simply push the newly created vector"v" into out main vector "vec"
        }
        
        return vec;
    }
};
