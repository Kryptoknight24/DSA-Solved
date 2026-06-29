class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n=s.size();
        for (int i=0; i < n-1; i++){  // Fixed loop condition to avoid out-of-bounds
            int diff = abs(s[i] - s[i+1]);  // Compute adjacent digit difference
            if (diff > 2) return false;  // Check if difference exceeds 2
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna