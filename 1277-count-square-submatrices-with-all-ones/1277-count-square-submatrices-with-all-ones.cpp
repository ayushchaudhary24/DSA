class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n= matrix[0].size();
        int t[m][n];
        int ans = 0;

        for(int i=0; i<m;i++){
             t[i][0] = matrix[i][0];
            ans+=t[i][0];
        }
        for(int j=1; j<n;j++){
            t[0][j] = matrix[0][j];
            ans+=t[0][j];           
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n;j++){
                if(matrix[i][j]==0) t[i][j] = 0;
                else{
                    t[i][j] = min({t[i-1][j], t[i-1][j-1], t[i][j-1]}) +1;
                    ans+=t[i][j];
                }
            }
        }
        return ans;      
    }
};