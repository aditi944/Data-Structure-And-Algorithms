class Solution {
public:
    
      bool isPowerOfThree(int n) 
    {
        if(n==1)
        {
            return true;
        }
        if(n%3!=0 || n<=0)
        {
            return false;
        }
        return isPowerOfThree(n/3);
        
    }
};

//RETURN AS A STRING

       string isPowerof3(int N){
       string s="Yes";
        if(N==1)
        {
            s="Yes";
            return s;
        }
        if(N%3!=0 || N<=0)
        {
            s="No";
            return s;
        }
        return isPowerof3(N/3);
        
        
     // code here 
    }
