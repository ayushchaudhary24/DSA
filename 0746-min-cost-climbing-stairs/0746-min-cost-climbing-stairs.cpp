class Solution {
public:
    
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(3);
        dp[0] = 0;
        dp[1] = 0;
        int n = cost.size();
        if(n<2) return 0;

        for(int i=2; i<=n;i++){
            dp[2] = min(cost[i-1]+dp[1], cost[i-2]+ dp[0]);
            dp[0] = dp[1];
            dp[1] = dp[2];

        }
        return dp[2];
        
    }
};