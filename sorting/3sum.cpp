#include<vector>
#include<algorithm>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3) return{};
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            if(nums[i]>0) break;
            int l=i+1,r=nums.size()-1,total=0;
            while(l<r){
                total=nums[i]+nums[l]+nums[r];
                if(total==0){
                    res.push_back({nums[i],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1]) l++;
                    while(l<r && nums[r-1]==nums[r]) r--;
                    l++;
                    r--;                   
                }
                else if(total>0) r--;
                else l++;
            }
        }
        return res;
    }
};