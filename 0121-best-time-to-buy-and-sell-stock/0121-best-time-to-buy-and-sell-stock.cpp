class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX; // Start with the highest possible price
        int max_profit = 0;      // Start with 0 profit
        
        for (int i = 0; i < prices.size(); i++) {
            // Update the minimum price if today's price is lower
            if (prices[i] < min_price) {
                min_price = prices[i];
            } 
            // Calculate profit if we sold today, update max_profit if it's higher
            else if (prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price;
            }
        }
        
        return max_profit;
    }
};