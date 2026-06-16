class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int t[n][n];
        for(int j=0; j<n;j++) t[0][j] = matrix[0][j];

        for(int i=1; i<n;i++){
            for(int j = 0; j<n;j++){
                int left = 1e9;
                int right = 1e9;
                if(j>=1) left = matrix[i][j] +t[i-1][j-1];
                int mid = matrix[i][j] +t[i-1][j];
                if(j<n-1) right = matrix[i][j] +t[i-1][j+1];
                t[i][j] = min({left,mid, right});
            }
        }
        int ans = t[n-1][0];
        for(int i=1; i<n;i++){
            ans = min(ans, t[n-1][i]);
        }
        return ans;
    }
};