class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        queue<int> q;
        int n =nums.size();
        if(n==0) return 0;
        
        int left = 0; 
        int right = 0;
        
        int result = INT_MIN;
        while(left<=right){
            if(right==n) break;
            if(nums[right]==0) {
                q.push(right);
            }
            if(q.size()>k){
                left = q.front()+1;
                q.pop();
     
            }
            result = max(result, right-left+1);
           
            right++;
        }
        return result;
    }
};