class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        queue<pair<int,int>> q;
        for(int i=0; i<n;i++){
            for(int j=0; j<m;j++){
                if(mat[i][j]==0) q.push({i,j});
                else mat[i][j] = INT_MAX;
            }
        }

        int rows[] = {1,0,-1,0};
        int cols[] = {0,1,0,-1};

        
        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();

            for(int i=0; i<4;i++){
                int new_rows = r+rows[i];
                int new_cols = c+cols[i];

                if(new_rows>=0 && new_rows<n && new_cols>=0 && new_cols<m){
                    if(mat[new_rows][new_cols]>mat[r][c]+1){
                        mat[new_rows][new_cols] = mat[r][c]+1;
                        q.push({new_rows, new_cols});
                    }
                }
            }
            
        }
        return mat;
    }
};