class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            // Update the lowest buying price
            minPrice = min(minPrice, prices[i]);

            // Calculate profit if we sell today
            int profit = prices[i] - minPrice;

            // Keep the maximum profit
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};