class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
          vector<int> ans;
        unordered_map<int, int> freq;
        freq.clear();
        priority_queue<pair<int, int> > pq;
        for(int i : nums)
            freq[i]++;
        for(auto i : freq)
            if(i.second)
                pq.push({i.second, i.first});
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    
        
        
    }
};
