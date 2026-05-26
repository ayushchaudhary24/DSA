class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v = heights;;
        int n = heights.size();
        
        sort(v.begin(),v.end());

        int count = 0;
        for(int j=0; j<n;j++){
            if(v[j]!=heights[j]) count++; 
        }
        return count;
    }
};