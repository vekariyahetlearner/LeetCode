class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum = 0, maxSum = LLONG_MIN;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(i >= k) sum -= nums[i - k];
            if(i >= k - 1) maxSum = max(maxSum, sum);
        }
        return static_cast<double>(maxSum) / k;
    }
};