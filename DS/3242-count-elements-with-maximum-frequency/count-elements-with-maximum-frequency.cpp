class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       int maxi=0,sum=0;
       map<int,int> mp;
       for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
       }
       for(auto it:mp){
           maxi=max(maxi,it.second);
       }

       for(auto it:mp){
           if(maxi==it.second){
               sum+=it.second;
           }
       }
return sum;
    }
};