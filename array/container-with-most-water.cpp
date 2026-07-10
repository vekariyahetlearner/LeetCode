#include<vector>
#include<algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,maxAmt=0;
        while(l<r){
            maxAmt=max(maxAmt,min(height[l],height[r])*(r-l));
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxAmt;
    }
};