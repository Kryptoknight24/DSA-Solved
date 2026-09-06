class Solution {
public:
    bool possible(const vector<int>& nums, int num, int limit) {
        long long sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            sum += (nums[i] + num - 1) / num;
        }
        return sum <= limit;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = *max_element(nums.begin(), nums.end());
        int low = 1;
        int ans = high;
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(possible(nums, mid, threshold)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna