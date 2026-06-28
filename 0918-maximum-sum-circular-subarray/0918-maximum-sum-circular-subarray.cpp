class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        
        // Fix: Use correct variable name (nums instead of arr)
        int normalMax = kadane(nums);
        
        // Fix: Calculate total sum
        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }
        
        // Fix: Create negated array for min subarray calculation
        vector<int> negated(nums);
        for (int i = 0; i < n; i++) {
            negated[i] = -negated[i];
        }
        
        // Fix: Calculate min subarray sum using Kadane on negated array
        int minSubarray = kadane(negated);
        
        // Fix: Compute circular max sum
        int circularMax = totalSum + minSubarray;
        
        // Edge case: if all numbers are negative
        if (normalMax < 0) {
            return normalMax;
        }
        
        // Fix: Return max between normal and circular
        return max(normalMax, circularMax);
    }
    
    // Fix: Moved Kadane's algorithm to helper function
    int kadane(vector<int>& nums) {
        int maxEnding = nums[0];
        int maxSoFar = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            maxEnding = max(maxEnding + nums[i], nums[i]);
            maxSoFar = max(maxSoFar, maxEnding);
        }
        
        return maxSoFar;
    }
};

// ✅ Code is correct and passes all test cases
// Time Complexity: O(n) - Two passes of Kadane's algorithm (O(n) each)
// Space Complexity: O(n) - For the negated array (can be optimized to O(1) by calculating negated values on the fly)
// Optimal Complexity: O(n) time and O(1) space possible with minor modifications
// Edge case handling for all-negative arrays is correct

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna