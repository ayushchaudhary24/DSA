class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int n = nums.size();
        int ans = n;
        for(int i=0; i<n;i++){
            if(!s.count(i)){
                ans = i;
                break;
            }
        }
        return ans;
    }
};