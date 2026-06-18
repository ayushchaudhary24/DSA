class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int n = nums.size();

        for(int i=0; i<n;i++){
            st.insert(nums[i]);
        }
        int count = 0;
        int ans = 0;
        int prev = -1e9;
        for(int x: st){
            if(prev+1==x) count++;
            else{
                ans = max(ans,count);
                count = 0;
            }
            prev = x;
        }
        ans = max(ans,count);
        if (n==0) return 0;
        return ans+1;
    }
};