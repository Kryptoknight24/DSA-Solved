class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int threshold = n / 3;
        int i = 0;
        while (i < n) {
            int j = i + 1;
            while (j < n && nums[j] == nums[i]) {
                j++;
            }
            int freq = j - i;
            if (freq > threshold) {
                ans.push_back(nums[i]);
            }
            i = j;
        }
        return ans;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna