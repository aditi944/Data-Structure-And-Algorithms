#include<iostream>
using namespace std;

int factorial(int n){
   
if(n<0)    
return(-1); /*Wrong value*/      
if(n==0)    
return(1);  /*Terminating condition*/    
else    
{    
return(n*factorial(n-1));        
}// write your code here
    
}


int main(){
    int n; cin>>n;
    cout<<factorial(n);
}