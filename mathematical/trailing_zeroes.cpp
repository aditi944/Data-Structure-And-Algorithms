#include<bits/stdc++.h>
#include<iostream.h>
 using namespace std;

 class Solution{
     int trailingZeroes(int N){
         int count=0;
         int p=5;
         while(N/p>0){
             count+=N/p;
             p*=5;
         }
         return count;
     }
 }

 int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        int ans=ob.trailingZeroes(N);
        count<<ans<<endl;
    }
    return 0;
}