class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        // Iterate through the first half of the array
        for (int i = 0; i < n; ++i) {
            // Add element from first half
            result.push_back(nums[i]);
            // Add corresponding element from second half
            result.push_back(nums[i + n]);
        }
        return result;
    }
    // Time Complexity: O(n) - single pass through the array
    // Space Complexity: O(n) - output array stores all 2n elements
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna