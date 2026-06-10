class Solution {
public:
    int tribonacci(int n) {
        // vector<int>dp(n+1,-1);
        // if(n==0) return 0;
        // if(n==1 || n==2) return 1;
        // if(dp[n]!=-1) return dp[n];
        // return dp[n] = tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);

        if(n==0) return 0;
        else if(n<=2) return 1;
        vector<int> dp(4);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] =1;
        for(int i=3; i<=n;i++){
            dp[3] = dp[0]+dp[1]+dp[2];
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = dp[3];
        }
        return dp[3];
    }
};