class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1,c=0;
        
        while(i<j){
            int sum=0;
            sum=sum+nums[i]+nums[j];
            if(sum==k){
                c++;
                i++;
                j--;
            }else if(sum<k){
                i++;
            }else{
                j--;
            }
        }
        return c;
    }
};