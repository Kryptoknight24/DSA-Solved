class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> maxi;
        deque<int> dq; // Stores indices of potential maxima
        
        for(int i=0;i<n;i++){
            // Remove elements out of the current window
            while(!dq.empty() && dq.front() <= i-k) {
                dq.pop_front();
            }
            
            // Remove elements smaller than current element
            while(!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }
            
            dq.push_back(i);
            
            // Start adding maxima to result from index k-1
            if(i >= k-1) {
                maxi.push_back(nums[dq.front()]);
            }
        }
        return maxi;
        // ✨ AI Analyze: Your approach calculates maximum SUM of sliding windows, but the problem requires finding MAXIMUM ELEMENT in each window. Current code has O(n*k) hidden complexity when checking window contents. Optimal solution uses deque to track indices of potential maxima in O(n) time.
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna