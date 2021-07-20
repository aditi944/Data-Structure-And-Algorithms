class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int> v;
    map<int, int> mp;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(mp.find(val) != mp.end())
            return false;
        v.push_back(val);
        mp[val] = (int)v.size() - 1;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
      auto it = mp.find(val);
        if(it == mp.end())
            return false;
        v[it->second] = v.back();
        mp[v.back()] = it->second;
        v.pop_back();
        mp.erase(it);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return v[rand()%v.size()];
    }
};;

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
