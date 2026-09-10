class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int maxi = 0;
    int m = accounts.size(); 
    
    for(int i = 0; i < m; i++) {
        int sum = 0;
        int n = accounts[i].size();  
        
        for(int j = 0; j < n; j++) {
            sum += accounts[i][j];
        }
        
        maxi = max(maxi, sum); 
    }
    
    return maxi;
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna