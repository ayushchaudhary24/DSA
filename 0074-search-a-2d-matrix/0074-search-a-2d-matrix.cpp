class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = 0;
        int c = matrix[0].size()-1;
        int row = matrix.size();

        while(r<row && c>=0){
            if(matrix[r][c]>target) c--;
            else if(matrix[r][c]<target) r++;
            else return true;
        }
        return false;
    }
};
