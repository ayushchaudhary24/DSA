class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp; 
        vector<pair<int,int>> v;  
        vector<int> ans;
        for(auto n1 : nums){
            mp[n1]++;
        }
        for(auto n2 : mp){
            v.push_back({n2.second, n2.first});
        }
        sort(v.begin(), v.end(), greater<pair<int,int>>());
        for(int j = 0; j < k; j++){
            ans.push_back(v[j].second);
        }

        return ans;
    }
};