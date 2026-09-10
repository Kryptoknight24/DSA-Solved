class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m = strs.size();
        // use the number of columns in the first row as the standard
        int n = strs[0].length();
        for (int col = 0; col < n; col++) {
            for (int row = 1; row < m; row++) {
                string thisStr = strs[row], prevStr = strs[row - 1];
                // check if the col index of each string is the same
                if (col >= thisStr.length() || col >= prevStr.length() ||
                    thisStr[col] != prevStr[col]) {
                    // found a non-matching character, only
                    // strs[row][0..col-1] is the common prefix
                    return strs[row].substr(0, col);
                }
            }
        }
        return strs[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna