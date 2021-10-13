//https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1#
vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies,candies+N);
       vector<int> res;
       int minsum = 0,maxsum=0;
       int i = 0, q = N-1;
       while(i<=q)
       {
           minsum+=candies[i];
           q -=K;
           i++;
       }
       int j = N-1;
       q = 0;
       while(j>=q)
       {
           maxsum+=candies[j];
           q+=K;
           j--;
       }
       res.push_back(minsum);
       res.push_back(maxsum);
       return res;                                                      // Write Your Code here
    }
