class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0;
        int j=0;
       
        vector<int> ans;
        deque<int> resp;
        while(j<nums.size()){
            while(resp.size()>0 && resp.back()<nums[j]) resp.pop_back();
            resp.push_back(nums[j]);
            if((j-i+1)<k) j++;
            else if((j-i+1)==k){
                ans.push_back(resp.front());
                if(nums[i]==resp.front()){
                    resp.pop_front();
                }
                i++;
                j++;
                
            }
        }
        return ans;
    }
};