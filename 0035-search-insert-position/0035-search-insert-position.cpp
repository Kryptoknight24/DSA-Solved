class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // Current approach sorts the array (O(n log n) time), but the input is already sorted.
        // Sorting also changes the original indices, which affects the returned position.
        // ✨ Fixed by removing unnecessary sorting and using binary search (O(log n) time)
        
        int left = 0, right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return left; // Index where target would be inserted
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna