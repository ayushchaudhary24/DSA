class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        int even = 0;
        int odd = 1;
        for(int i=0; i<n;i++){
            if(nums[i]>0){
                v[even] = nums[i];
                even +=2;
            }else{
                v[odd] = nums[i];
                odd+=2;
            }
        }
        return v;
    }
};