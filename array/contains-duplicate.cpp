class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dup;
        for(auto &x: nums){
            if(dup.count(x))return true;
            dup.insert(x);
        }
        return false;
    }
};