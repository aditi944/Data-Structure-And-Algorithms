int multiply(int arr[], int n)
{
    int sum_right=0,sum_left=0,ans=0;
   for(int i=0;i<n;i++){
       if(i>=n/2){
           sum_right+=arr[i];
       }
       else{
           sum_left+=arr[i];
       }
   }
   ans=sum_right*sum_left;
   return ans;
   // Complete the function
}