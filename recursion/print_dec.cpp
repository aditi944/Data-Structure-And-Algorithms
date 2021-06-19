#include<iostream>
using namespace std;

void printDecreasing(int n){
    if(n==0){
        exit(0);
    }
   cout<<n<<endl;
   printDecreasing(n-1);// write your code here
    
}

int main(){
    int n;
    cin >> n;
    printDecreasing(n);
}