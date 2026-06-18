class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int count = 0;
        for(int x: nums){
            if(x==1) count++;
            else{
                ans = max(ans,count);
                count =0;
            }
        }
        ans = max(ans,count);
        return ans;
    }
};