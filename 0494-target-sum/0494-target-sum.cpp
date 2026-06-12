class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int totalsum = 0;
        for(int n1:nums) totalsum+=n1;
        if(abs(target) > totalsum) return 0;

        if((totalsum + target) % 2 != 0) return 0;

        int s1 = (target+totalsum)/2;
        swap(s1,target);
        int t[n+1][target+1];

        for(int j=0; j<=target;j++) t[0][j] = 0;
        for(int i=0; i<=n;i++) t[i][0] = 1;
        t[0][0] = 1;

        for(int i=1; i<=n; i++){
            for(int j=0; j<=target; j++){
                if(nums[i-1]<=j){
                    t[i][j] = t[i-1][j-nums[i-1]] + t[i-1][j];
                }else t[i][j] = t[i-1][j];
            }
        }
        return t[n][target];
    }
};