class Solution {
public:
    int helper(vector<int>& nums, int i, int n, vector<int>&dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i] = max(nums[i]+helper(nums, i+2,n, dp),helper(nums, i+1,n, dp));
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);

        return helper(nums,0,n, dp);
    }
};