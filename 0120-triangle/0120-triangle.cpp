class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n= triangle.size();
        int t[n][n];

        long long matrix[n][n];
        for(int i=0; i<n;i++){
            for(int j=0; j<triangle[i].size();j++){
                matrix[i][j] = triangle[i][j];
            }
            for(int j=triangle[i].size();j<n; j++){
                matrix[i][j] = INT_MAX-1;
            }
        }

        t[0][0] = matrix[0][0];

        for(int i=1;i<n;i++){
            t[i][0] = matrix[i][0] + t[i-1][0];

            for(int j=1;j<i;j++){
                t[i][j] = matrix[i][j] +
                        min(t[i-1][j-1], t[i-1][j]);
            }

            t[i][i] = matrix[i][i] + t[i-1][i-1];
        }

        
        int ans = INT_MAX;
        for(int j=0;j<n;j++) ans = min(ans, t[n-1][j]);
        return ans;
    }
};