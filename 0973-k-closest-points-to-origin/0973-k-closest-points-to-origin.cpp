class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<float,int>> v;
        int n = points.size();
        for(int i=0; i<n;i++){
            float dist = sqrt(pow(points[i][0],2) + pow(points[i][1],2));
            v.push_back({dist,i});
        }
        priority_queue<
        pair<float,int>,
        vector<pair<float,int>>,
        greater<pair<float,int>>
    > pq(v.begin(), v.end());
        vector<vector<int>> ans;
        for(int i=0; i<k;i++){
            auto p = pq.top();
            ans.push_back(points[p.second]);
            pq.pop();
        }
        return ans;

    }
};