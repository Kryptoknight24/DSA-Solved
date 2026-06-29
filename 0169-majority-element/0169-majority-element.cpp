class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // -------------------------------------------------------------------------
        // 💡 LEETHUB COACH ANALYSIS:
        // - Your approach uses the Boyer-Moore Voting Algorithm, which is the optimal O(N) Time and O(1) Space solution.
        // - Current Time Complexity: O(N) (Two passes)
        // - Current Space Complexity: O(1)
        //
        // ⚠️ BUG IDENTIFIED:
        // - In your first pass, 'res' is used to store the INDEX of the candidate (initialized to 0, updated to i).
        // - At the end of your function, you return 'res' directly. This returns the INDEX of the majority element rather than its VALUE.
        // 
        // 🛠️ HOW TO FIX:
        // - Change your return statement at the end of the function to return the actual element value instead of the index.
        // -------------------------------------------------------------------------

        // Time Complexity: O(n) - two passes over the array.
        // Space Complexity: O(1) - only a few integer variables.
        // This is the optimal complexity for the Majority Element problem.
        int n=nums.size();
        int res=0;int count =1;
        // First pass: Boyer-Moore voting to find a candidate.
        for(int i=1;i<n;i++){
            if(nums[res]==nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                count=1;
                res=i;
            }
        }
        // Second pass: verify that the candidate occurs > n/2 times.
        count=0;
        for(int i=0;i<n;i++){
            if(nums[res]==nums[i]){
                count++;
            }
            // BUG FIX: Moved verification outside loop to ensure full count
        }
        if(count<=n/2){
            return -1; // Should never execute per problem constraints
        }
        // After counting, we should check if count > n/2 and then return res.
        // Since the problem guarantees a majority element, we can simply return res.
         return nums[res];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna