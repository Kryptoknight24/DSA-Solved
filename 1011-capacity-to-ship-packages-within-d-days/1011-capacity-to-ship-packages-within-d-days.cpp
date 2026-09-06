class Solution {
public:
     bool possible(vector<int> &weights, int cap, int days){
        int cur = 0, used = 1;        
        for(int w : weights){
            if(cur + w > cap){          
                used++;
                cur = 0;
            }
            cur += w;                   
        }
        return used <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = 0;
        for(int w : weights){
            low  = max(low, w);        
            high += w;                 
        }

        int ans = high;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(possible(weights, mid, days)){
                ans = mid;             
                high = mid - 1;         
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna