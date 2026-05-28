class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        vector<int> right(n);
        right[n-1] = 0;
        for(int i=n-2;i>=0;i--){
            right[i] = max(right[i+1], prices[i+1]);
        }
        for(int j=0; j<n;j++){
            int profit = right[j]-prices[j];
            max_profit = max(max_profit, profit);
        }
        if (max_profit<0) return 0;
        return max_profit;
    }
};