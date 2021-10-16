//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
          int n = prices.size();
        int minn = prices[0],  maxx = prices[n-1], prev = 0, ans = 0;
        vector<int> pref(n, 0);
        
        for(int i = 1; i < n; i++) {
            pref[i] = max(pref[i-1], prices[i] - minn); // calculating profit upto ith day from the start
            minn = min(minn, prices[i]);
        }

        for(int i = n-2; i >= 0; i--) {
            prev = max(prev, maxx - prices[i]); // calculating profit from ith day to last day
            ans = max(pref[i] + prev, ans); // calculating profit with 2 transactions with 1st before and 2nd after ith day
            maxx = max(maxx, prices[i]);   
        }
        return ans;
    }
};
