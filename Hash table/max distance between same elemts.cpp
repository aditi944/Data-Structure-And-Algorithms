int maxDistance(int arr[], int n)
    {
    unordered_map<int,int>ans;
     unordered_map<int, int> mp;
 
    // Traverse elements and find maximum distance between
    // same occurrences with the help of map.
    int max_dist = 0;
    for (int i=0; i<n; i++)
    {
        // If this is first occurrence of element, insert its
        // index in map
        if (mp.find(arr[i]) == mp.end())
            mp[arr[i]] = i;
 
        // Else update max distance
        else
            max_dist = max(max_dist, i - mp[arr[i]]);
    }
 
    return max_dist;//Code here
    }
