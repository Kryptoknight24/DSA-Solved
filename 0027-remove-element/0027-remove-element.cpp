class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(); // original array length
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());   
        return nums.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna