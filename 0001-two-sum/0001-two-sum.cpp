class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n =nums.size();
        for(int i=0; i<n;i++){
            mp[nums[i]] = i;
        }

        for(int i=0;i<n;i++){
            int val = target-nums[i];
            if(mp.find(val)!=mp.end()){
                if(mp[val]!=i)
                return {i, mp[val]};
            }
        }
        return {-1,-1};
    }
};