class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,maxi=INT_MIN;
       while(l<r){
           int leftHeight=height[l];
           int rightHeight=height[r];
            int container=min(leftHeight,rightHeight)*(r-l);
            maxi=max(maxi,container);

            if(leftHeight<rightHeight) l++;
            else r--;
       }
       return maxi;
    }
};