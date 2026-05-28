class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n =nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i =0; i<n-2;i++){
             if(i>0 && nums[i]==nums[i-1]) continue;
            int n1=nums[i];
            int left = i+1;
            int right = n-1;
            
            
            while(left<right){
                
                int ans = n1+nums[left]+nums[right];
                if(ans==0){
                    res.push_back({n1,nums[left], nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])
                        left++;

                    while(left<right && nums[right]==nums[right+1])
                        right--;
                    
                }
                else if(-1*n1>nums[left]+nums[right]) left++;
                else right--;
                
            }

        }
        return res;
    }
};
