
class Solution {
    // mapping from each digit to letters
    unordered_map<char, string> mapping = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
        {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    };

    vector<string> res;
    string sb;

public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return res;
        }
        backtrack(digits, 0);
        return res;
    }

    void backtrack(const string& digits, int start) {
        if (sb.size() == digits.size()) {
            res.push_back(sb);
            return;
        }

        char digit = digits[start];
        for (char c : mapping[digit]) {
            sb.push_back(c);
            backtrack(digits, start + 1);
            sb.pop_back();
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna