class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0) return {-1,-1};
        int lower = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int upper= upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(lower+1>n) return {-1,-1};
        else if(nums[lower]!=target) return {-1,-1};
        return {lower, upper-1};
    }
};