class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int ,int>mp;
        int ps=0, res=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            ps+=nums[i];
           if(mp.find(ps-goal)!=mp.end()){
            res+=mp[ps-goal];
           }
           mp[ps]++;
        }
        return res;
    }
};