class Solution {
public:
    bool static cmp(pair<char, int>& a,
          pair<char, int>& b){
    return a.second > b.second;
    }
    string frequencySort(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        vector<pair<char,int>> m;
        for(auto &it : mp){
            m.push_back(it);
        }
        sort(m.begin(),m.end(),cmp);
        string ret = "";
        for(int i=0;i<m.size();i++){
            while(m[i].second > 0){
                ret+=m[i].first;
                m[i].second --;
            }
        }
        return ret;
    }
};
