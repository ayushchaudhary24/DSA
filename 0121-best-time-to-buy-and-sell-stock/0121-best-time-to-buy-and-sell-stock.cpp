class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int idx = prices[0];
        int profit = 0;
        int n = prices.size();
        for(int i=1; i<n;i++){
            int cost = prices[i]-idx;
            profit = max(profit, cost);
            idx = min(idx,prices[i]);

        }
        return profit;
    }
};