int logpower(int x, int n){
    if(n==0)
    return 1;
    int px=logpower(x,n/2);
    if(n%2==0)
    return px;
    else return x*px;
}