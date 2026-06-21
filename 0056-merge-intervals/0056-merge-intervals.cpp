class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>v;
        v.push_back(intervals[0]);
        int curr = 0;
        for(int i=1;i<n;i++){
            if(v[curr][1]>=intervals[i][0]){
                v[curr][1] = max(v[curr][1], intervals[i][1]);
            }else{
                v.push_back(intervals[i]);
                curr++;
            }
        }
        return v;
    }
};