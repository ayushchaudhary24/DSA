class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_arr[n];
        max_arr[n-1] = 0;
        for(int i=n-2; i>=0; i--){
            max_arr[i] = max(max_arr[i+1], prices[i+1]);
        }
        int result = 0;
        for(int i=0; i<n;i++){
            int profit = max_arr[i] - prices[i];
            result = max(result,profit);
        }
        return result;
    }
};