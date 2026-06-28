class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0, minSum = INT_MAX, maxSum = INT_MIN;
        int currMin = 0, currMax = 0;
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
            currMin = min(nums[i], currMin + nums[i]);
            currMax = max(nums[i], currMax + nums[i]);
            minSum = min(minSum, currMin);
            maxSum = max(maxSum, currMax);
        }
        if(total == minSum) return maxSum;
        return max(maxSum, total - minSum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna