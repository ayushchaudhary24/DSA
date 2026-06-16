class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n =grid[0].size();

        long long t[m][n];
        t[0][0] = grid[0][0];
        for(int i=1; i<m;i++) t[i][0] = grid[i][0]+t[i-1][0];
        for(int j=1; j<n;j++) t[0][j] =  grid[0][j]+t[0][j-1];
       
        for(int i=1; i<m;i++){
            for(int j=1; j<n;j++){
                t[i][j] = grid[i][j]+ min(t[i-1][j], t[i][j-1]);
            }
        }
        
        return t[m-1][n-1];
    }
};