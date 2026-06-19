class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<bool>> t(n, vector<bool>(n, false));
        for(int i=0; i<n;i++){
            for(int j=0;j<n;j++){
                if(!t[i][j]){
                     swap(matrix[i][j], matrix[j][n-i-1]);
                     t[j][n-i-1] =true;
                }
            }
        }
        
    }
};