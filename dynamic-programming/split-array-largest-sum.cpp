class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int mid) {
        int subarrays = 1, currentSum = 0;
        for (int n : nums) {
            if (currentSum + n > mid) {
                subarrays++;
                currentSum = n;
                if (subarrays > k) return false;
            } else {
                currentSum += n;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canSplit(nums, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
