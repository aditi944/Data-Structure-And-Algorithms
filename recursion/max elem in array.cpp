int maxelem(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return max(arr[n-1],maxelem(n-1))
}

//find index of an element

int findindex(int arr[],n,elem){
    if(arr[n]==elem){
        return n;
    }
    if(n==-1){
        return -1;
    }
    return(findindex(arr[n-1],n-1,elem));
}