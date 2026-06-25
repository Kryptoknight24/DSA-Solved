class Solution {
public:
    bool isPalindrome(int x) {
        // Time Complexity: O(d/2) where d is the number of digits in x (≈ O(log10(x))).
        // Space Complexity: O(1) – only a few integer variables are used.
        // Note: This approach avoids integer overflow by reversing only half the number.
        if (x < 0) return false;
        if (x % 10 == 0 && x != 0) return false; // Handles numbers ending with 0 (except x=0)

        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x = x / 10;
        }
        return x == reversed || x == reversed / 10; // Handles both even/odd digit lengths
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna