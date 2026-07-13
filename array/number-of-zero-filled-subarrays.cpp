class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int count=0;
        long long result=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==0){
                count++;
                if(nums[i]==0 && nums[i+1]!=0){
                  result+=(count*(count+1))/2;
                  count=0;
                }
            }
        }
        if(nums[nums.size()-1]==0) count++;
        result+=(count*(count+1))/2;
        return result;
    }
};