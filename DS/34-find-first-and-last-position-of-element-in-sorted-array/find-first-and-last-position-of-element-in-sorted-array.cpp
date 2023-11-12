class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=solve(true,nums,target);
        int last=solve(false,nums,target);
        return {first,last};
    }
    
    int solve(bool isFirst,vector<int> arr,int target){
        int index=-1;
        int l=0,h=arr.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==target){
              index=mid;
                if(isFirst){
                    h=mid-1;
                }else{
                    l=mid+1;
                }
            } 
            else if(target>arr[mid]) l=mid+1;
            else h=mid-1;
        }
        return index;
    }
};