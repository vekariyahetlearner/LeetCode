class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorAll=0;
        for(auto n:nums) xorAll^=n;
        long long d= xorAll&(-xorAll);
        long long bucket1=0,bucket2=0;
        for(auto n:nums){
            if(n&d) bucket1^=n;
            else bucket2^=n;
        }
        return {(int)bucket1,(int)bucket2};
    }
};