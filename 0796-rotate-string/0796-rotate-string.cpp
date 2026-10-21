class Solution {
public:
    bool rotateString(string& s, string& goal) {
        if (s.size() != goal.size()) return false;
        for (int i = 0; i < s.size(); i++) {
            if (s == goal) return true;
            rotate(s.begin(), s.begin() + 1, s.end()); 
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna