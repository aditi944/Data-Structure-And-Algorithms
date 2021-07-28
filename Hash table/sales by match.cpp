//count the pair of same color of socks represented by numbers.
int sockMerchant(int n, vector<int> ar) {
   unordered_set <int> u;
    int pairs = 0;
    for(int i = 0; i < n; i++){
        if(u.find(ar[i]) == u.end())
            u.insert(ar[i]);
        else{
            pairs++;
            u.erase(ar[i]);
        }
    } 
    return pairs;

}
