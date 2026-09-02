class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = 0;
        for (int pile : piles) {
            if (pile > maxPile) maxPile = pile;
        }
        
        int low = 1;
        int high = maxPile;
        int ans = maxPile;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            long long hoursNeeded = 0;
            for (int pile : piles) {
                hoursNeeded += (pile + mid - 1) / mid;
            }
            
            if (hoursNeeded <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna