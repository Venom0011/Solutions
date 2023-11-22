class Solution {
    public int longestSubarray(int[] nums) {
        
        int current=0;
        int  previous =0;
        int ans=0;
        boolean flag=false;
        
        for(int i:nums){
            if(i==1){
              current++;  
            }else{
                ans=Math.max(ans,current+previous);
                previous=current;
                current=0;
                flag=true;
            }
        }
        ans = Math.max(ans,current+previous);
        if(flag){
            return ans;
        }else{
            return ans-1;
        }
        
    }
}