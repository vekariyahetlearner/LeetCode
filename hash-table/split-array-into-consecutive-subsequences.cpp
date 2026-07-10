class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto num:nums) freq[num]++;
        unordered_map<int,int> appendNeeded;
        for(auto num:nums){
            if(freq[num]==0) continue;
            if(appendNeeded[num]>0){
                appendNeeded[num]--;
                appendNeeded[num+1]++;
            }
            else if(freq[num+1]>0 && freq[num+2]>0){
                freq[num+1]--;freq[num+2]--;
                appendNeeded[num+3]++;
            }
            else return false;
            freq[num]--;
        }
        return true;
    }
};