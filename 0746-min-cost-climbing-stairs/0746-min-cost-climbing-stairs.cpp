class Solution {
public:
    int helper(vector<int>& cost, int n, vector<int>&dp){
        if(n==0 || n==1) return 0;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = min(cost[n-1]+helper(cost,n-1, dp), cost[n-2] + helper(cost,n-2, dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n =cost.size();
        vector<int>dp(n+1, -1);
        return helper(cost,n,dp);
    }
};