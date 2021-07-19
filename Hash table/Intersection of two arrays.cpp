class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         
         vector<int>intersection;
        int l1=nums1.size(),l2=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int arr[1001]={-1};
        for(int i=0;i<l1;i++)
        {
            arr[nums1[i]]=1;
        }
        for(int i=0;i<l2;i++)
        {
            if(arr[nums2[i]]==1)
            {
                intersection.push_back(nums2[i]);
                arr[nums2[i]]=-1;
            }
        }
    return intersection;
    }
};