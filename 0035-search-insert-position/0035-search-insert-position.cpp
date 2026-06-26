class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // fix this
        // Removed unnecessary sorting (input array is already sorted)
        // Replaced with binary search for O(log n) time complexity
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) 
                low = mid + 1;
            else 
                high = mid - 1;
        }
        return low; // Correct insert position when target not found
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna