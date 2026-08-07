class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0; // Handle 0 explicitly just in case
        int low = 1, high = x;
        int ans = 0;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            long msq = (long)mid * mid; 
            
            if (x == msq) {
                return mid;
            } else if (x < msq) {
                high = mid - 1;
            } else {
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna