class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,mini=-1;
        while(i<nums1.size() && j<nums2.size()){
           
           if(nums1[i]==nums2[j]){
               mini=nums1[i];
               break;
           }
            if(nums1[i]<nums2[j]){
                i++;
            }else if(nums1[i]>nums2[j]){
                j++;
            }

        }

        return mini;
    }
};