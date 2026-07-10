class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1;
    int sum = 0, count = 0;
    
    for (int num : nums) {
        sum += num;
        count += prefixCount[sum - k];
        prefixCount[sum]++;
    }
    return count;
}
};