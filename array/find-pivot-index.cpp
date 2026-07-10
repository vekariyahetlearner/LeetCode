class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     vector<int> prefixSum(nums.size()+1,0);
      prefixSum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefixSum[i]=nums[i]+prefixSum[i-1];
        }   
     if(prefixSum[nums.size()-1]-prefixSum[0]==0) return 0;
     for(int i=1;i<nums.size();i++){
        if(prefixSum[i-1]==(prefixSum[nums.size()-1]-prefixSum[i])){
            return i;
        }
     }
     return -1;
    }
};