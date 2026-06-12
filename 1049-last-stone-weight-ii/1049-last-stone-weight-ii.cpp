class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n = stones.size();
        int S = 0;
        for(int n1:stones) S+=n1;
        int total = S;
        S = S/2;

        int t[n+1][S+1];
        for(int j=0; j<=S;j++) t[0][j] = 0;
        for(int i=0; i<=n;i++) t[i][0] = 0;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=S;j++){
                if(stones[i-1]<=j) t[i][j] = max(stones[i-1]+t[i-1][j-stones[i-1]], t[i-1][j]);
                else t[i][j] = t[i-1][j];
            }
        }
        return total-2*t[n][S];
    }
};