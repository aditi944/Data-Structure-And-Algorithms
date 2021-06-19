#include<iostream>
using namespace std;

void printIncDec(int n){
   if
   (n==0)
   return;
  cout<<n<<'\n';
    printIncDec(n-1);
    cout<<n<<'\n';
    
}


int main(){
    int n; cin>>n;
    printIncDec(n);
}
