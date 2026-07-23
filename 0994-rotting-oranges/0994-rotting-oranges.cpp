class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        int fresh =0;
        int time =0;
        for(int i=0; i<n;i++){
            for(int j=0; j<m;j++){
                if(grid[i][j]==2) q.push({{i,j},0});
                else if(grid[i][j]==1) fresh++;
            }   
        }

        int rows[] = {1,0,-1,0};
        int cols[] = {0,1,0,-1};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();

            time = max(time,t);

            for(int i=0; i<4;i++){
                int nr = r+rows[i];
                int nc = c+cols[i];

                if(nr>=0 &&nr<n && nc>=0 && nc<m && grid[nr][nc]==1){
                    grid[nr][nc]=2;
                    q.push({{nr,nc},t+1 });
                    fresh--;
                }
            }
        }
        //fresh--;
        if(fresh>0) return -1;
        return time;
    }
};