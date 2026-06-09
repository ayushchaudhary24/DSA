class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(3,1);
        dp[2] = 1;
        dp[1] = 1;

        for(int i=n-2; i>=0; i--){
            dp[0] = dp[1]+dp[2];
            dp[2] = dp[1];
            dp[1] = dp[0];
        }
        return dp[0];
    }
};