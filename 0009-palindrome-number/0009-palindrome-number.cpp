class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        string str=to_string(x);
        string str1=string(str.rbegin(), str.rend()); 
        if(str==str1){
            return true;
        }
        else{
            return false;
        }
    }
};
// Time Complexity: O(n) where n is number of digits (string conversion + reversal)
// Space Complexity: O(n) for storing two string copies
// Optimal Approach: Reverse half the integer mathematically (O(1) space possible)
// Current solution is correct but can be optimized for space

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna