class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if (nums.size() < 3) {
            return 0;
        }
        // don't forget to sort the array first
        sort(nums.begin(), nums.end());
        // record the deviation of the sum of three numbers from the target value
        int delta = INT_MAX;
        for (int i = 0; i < nums.size() - 2; i++) {
            // fix nums[i] as the first number of the three sums,
            // then search for the two-sum closest to target - nums[i] in nums[i+1..]
            int sum = nums[i] + twoSumClosest(nums, i + 1, target - nums[i]);
            if (abs(delta) > abs(target - sum)) {
                delta = target - sum;
            }
        }
        return target - delta;
    }

    // search for the two-sum closest to target in nums[start..]
    int twoSumClosest(vector<int>& nums, int start, int target) {
        int lo = start, hi = nums.size() - 1;
        // record the deviation of the two-sum from the target value
        int delta = INT_MAX;
        while (lo < hi) {
            int sum = nums[lo] + nums[hi];
            if (abs(delta) > abs(target - sum)) {
                delta = target - sum;
            }
            if (sum < target) {
                lo++;
            } else {
                hi--;
            }
        }
        return target - delta;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna