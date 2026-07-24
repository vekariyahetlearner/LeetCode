class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int num: nums){
            mp[num]++;
        }
        int count = 0;
        for (auto [k,v] : mp) {
            count += v * (v - 1) / 2;
        }
        return count;
    }
};