class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        long n = coins.size();
        long long t[n+1][amount+1];

        for(long j=0; j<=amount;j++) t[0][j] = INT_MAX;
        for(long i=0; i<=n; i++) t[i][0] = 0;

        for(long i=1; i<=n;i++){
            for(long j=1; j<=amount;j++){
                if(coins[i-1]<=j){
                    t[i][j] = min(1+t[i][j-coins[i-1]], t[i-1][j]);
                }else t[i][j] = t[i-1][j];
            }
        }
        if(t[n][amount]==INT_MAX) return -1;
        return t[n][amount];
    }
};