//Input: list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"]
//Output: ["Shogun"]
//Explanation: The only restaurant they both like is "Shogun".

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>ans;
        int mn=INT_MAX;

        for(int i=0;i<list1.size();i++){
            ans[list1[i]]=i;
        }
        for(int j=0;j<list2.size();j++){

            if(ans.count(list2[j])){
                ans[list2[j]]+=j;
                mn=min(mn,ans[list2[j]]);
            }
        }
         list1.clear();
         for(int i=0; i<list2.size(); i++) {
              if(ans.count(list2[i]) && mn==ans[list2[i]]) list1.push_back(list2[i]);
         }
         return list1;
        
        
    }
};