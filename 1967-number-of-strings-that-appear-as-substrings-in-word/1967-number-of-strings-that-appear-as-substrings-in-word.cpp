class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        // Initialize a counter to track the number of matching substrings
        int count = 0;
        
        // Iterate through each pattern in the patterns vector
        for (const string& pattern : patterns) {
            // Check if the current pattern is a substring of 'word'
            // If found, increment the count
            if (word.find(pattern) != string::npos) {
                count++;
            }
        }
        
        // Return the total count of matching patterns
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna