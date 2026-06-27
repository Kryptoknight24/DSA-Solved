class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        // ans should have space for 2*n elements before using operator[]
        vector<int> ans;
        // Hint: allocate the required size
        ans.resize(2 * n); // allocate space for concatenated array
        for (int i=0;i<n;i++){
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna