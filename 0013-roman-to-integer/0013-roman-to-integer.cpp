class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;

        for (int i = 0; i < s.size(); i++) {
            int current = romanMap[s[i]];
            int next = (i + 1 < s.size()) ? romanMap[s[i + 1]] : 0;

            if (current < next) {
                total -= current;   
            } else {
                total += current;
            }
        }

        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna