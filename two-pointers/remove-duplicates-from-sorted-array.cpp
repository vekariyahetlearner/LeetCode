class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int k=s.size();
        int writePos=0;
        for(int readPos=0;readPos<nums.size();readPos++){
            if(writePos!=readPos){
                if(nums[writePos]!=nums[readPos]){
                    nums[++writePos]=nums[readPos];
                }
            }
            if(writePos==k){
                break;
            }
        }
    return k;
    }
};