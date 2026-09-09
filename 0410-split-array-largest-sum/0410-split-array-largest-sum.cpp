class Solution {
public:
     int splitArray(vector<int>& nums, int k) {
        auto canSplit = [&](int limit) {
            int count = 1;
            long long currentSum = 0;
            
            for (int num : nums) {
                if (currentSum + num > limit) {
                    count++;
                    currentSum = num;
                    if (count > k) return false;
                } else {
                    currentSum += num;
                }
            }
            return true;
        };
        
        // Binary search range
        int lo = *max_element(nums.begin(), nums.end());
        int hi = accumulate(nums.begin(), nums.end(), 0LL);
        
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (canSplit(mid)) {
                hi = mid;  // Try smaller max sum
            } else {
                lo = mid + 1;  // Need larger max sum
            }
        }
        
        return lo;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna