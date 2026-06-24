
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
        int res = 0;
        int curr = 0;
        
        for (int i = 0; i < n; i++) {
            // Rule 1: Every element must be <= threshold
            if (nums[i] > threshold) {
                curr = 0; // Completely break the chain
            } 
            // Rule 2: If we are already building a chain, check the alternating parity
            else if (curr > 0 && (nums[i] % 2 != nums[i - 1] % 2)) {
                curr++;
            } 
            // Rule 3: If we aren't in a chain (or parity broke), we can only start a new chain if the number is EVEN
            else if (nums[i] % 2 == 0) {
                curr = 1;
            } 
            // Otherwise, it's an odd number trying to start a chain (invalid)
            else {
                curr = 0;
            }
            
            res = max(res, curr);
        }
        
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna