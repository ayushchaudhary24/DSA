class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int n1: nums)
            mp[n1]++;
        
        int max_freq = 0;
        int ans = 0;
        for(auto it: mp){
            if(max_freq<it.second){
                max_freq = it.second;
                ans= it.first;
            }
        }
        return ans;
    }
};