class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }

    bool isPalindrome(int n) {
        string s = to_string(n);
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    int primePalindrome(int n) {
        if (n >= 8 && n <= 11) return 11;
        
        for (int i = n; ; ++i) {

            if (i > 11 && (to_string(i).size() % 2 == 0)) {
   
                int len = to_string(i).size();
                i = pow(10, len);
                continue;
            }
            
            if (isPalindrome(i) && isPrime(i)) {
                return i;
            }
        }
        return -1;
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna