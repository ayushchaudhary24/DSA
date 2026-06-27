class Solution {
public:
    int AtMost(vector<int>&nums, int k){
        unordered_map<int,int> mp;
        int count =0;
        int l = 0; 
        int r =0;
        if(k<0) return 0;
        int n=nums.size();
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>k){
                if(mp[nums[l]]==1) mp.erase(nums[l]);
                else mp[nums[l]]--;
                l++;
            }
            count +=r-l+1;
            r++;
        }
        return count;
        
        }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return AtMost(nums,k) - AtMost(nums,k-1);
    }
};