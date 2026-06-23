class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        // Expected sum of numbers from 0 to n
        int expectedSum = n * (n + 1) / 2;
        
        // Actual sum of elements in the vector
        int actualSum = std::accumulate(nums.begin(), nums.end(), 0);
        
        return expectedSum - actualSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna