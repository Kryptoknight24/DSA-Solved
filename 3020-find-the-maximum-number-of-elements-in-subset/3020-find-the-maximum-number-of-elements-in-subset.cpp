class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> counts;
        
        // Step 1: Count frequencies of all elements
        for (int num : nums) {
            counts[num]++;
        }
        
        int max_len = 0;
        
        // Step 2: Handle the special case where the base is 1
        if (counts.count(1)) {
            int count1 = counts[1];
            // The length must be odd to form a valid peak pattern
            max_len = (count1 % 2 == 0) ? count1 - 1 : count1;
        }
        
        // Step 3: Check all other bases
        for (auto const& [val, freq] : counts) {
            if (val == 1) continue;
            
            long long current = val;
            int current_len = 0;
            
            // Build the sequence: x, x^2, x^4... requiring at least 2 of each
            while (counts.count(current) && counts[current] >= 2) {
                current_len += 2;
                current = current * current;
            }
            
            // Check the stopping condition for the peak element
            if (counts.count(current) && counts[current] >= 1) {
                // The current element can be the peak
                current_len += 1;
            } else {
                // The peak element doesn't exist, so the previous element 
                // in the chain must serve as the peak instead.
                current_len -= 1;
            }
            
            // Update global maximum, ensuring a minimum valid length of 1
            max_len = max(max_len, current_len);
        }
        
        // If the array had no 1s and no squares, a single element forms a valid sequence of length 1
        return max(max_len, 1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna