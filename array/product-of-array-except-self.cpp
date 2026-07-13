class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefMul(nums.size(),1),sufMul(nums.size(),1),result(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            prefMul[i]=prefMul[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            sufMul[i]=sufMul[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            result[i]=sufMul[i]*prefMul[i];
        }
        return result;
    }
};