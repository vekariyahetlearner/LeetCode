class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorAll=0;
        for(int num: nums){
            xorAll^=num;
        }
        long long diffBit=(xorAll)&(-xorAll);
        int x=0;
        for(int num: nums){
            if(num & diffBit){
                x^=num;
            }
        }
        return {x, (int)(x^xorAll)};
    }
};