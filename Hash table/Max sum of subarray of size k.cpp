int maximumSumSubarray(int K, vector<int> &Arr , int N){
        if (N < K)
    {
      
       return -1;
    }
 
    // Compute sum of first window of size k
    int res = 0;
    for (int i=0; i<K; i++)
       res += Arr[i];
 
    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int curr_sum = res;
    for (int i=K; i<N; i++)
    {
       curr_sum += Arr[i] - Arr[i-K];
       res = max(res, curr_sum);
    }
 
    return res;// code here 
    }
