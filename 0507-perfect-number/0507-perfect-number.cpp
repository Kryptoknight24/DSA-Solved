class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;
        
        int sum = 1; 
        int i = 2;
        
        while (i * i <= num) {
            if (num % i == 0) {
                sum += i;
                if (i * i != num) {
                    sum += (num / i);
                }
            }
            i++;
        }
        
        return sum == num;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna