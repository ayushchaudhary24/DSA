class Solution {
public:
    int trap(vector<int>& height) {
        int n =height.size();
        vector<int> left(n);
        vector<int> right(n);
        int ans =0;

        if(n==0) return 0;
        else{
            left[0] = 0;
            right[n-1] = 0;
        }
        for(int i=1; i<n;i++){
            left[i] = max(left[i-1], height[i-1]);
        }
        for(int i=n-2; i>0;i--){
            right[i] = max(right[i+1], height[i+1]);
        }
        for(int i=0; i<n;i++){
            int water = min(left[i], right[i]) - height[i];
            if(water<0) water = 0;
            ans+= water;
        }
        return ans;
    }
};