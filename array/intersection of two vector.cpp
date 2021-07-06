// when the output can contain duplicate element
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
            int i=0,j=0;
        vector<int>ans;
        int n1=nums1.size();
        int n2=nums2.size();
        sort(nums1.begin(),nums1.end());
sort(nums2.begin(),nums2.end());
        while(i<n1&&j<n2){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                ans.push_back(nums1[i++]);
                j++;
            }
        }
       
        return ans;
    }
};


//when there should be no multiple in the output

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
