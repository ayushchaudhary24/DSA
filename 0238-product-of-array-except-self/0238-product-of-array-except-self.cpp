class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // {24,12,4,1}
        // {1,1,2,6}
        vector<int> ans;

        int n= nums.size();
        vector<int> left_product;
        vector<int> right_product(n);
        int lp = 1;;
        int rp = 1;;
        for(int i =0; i<n;i++){
            if(i==0){
                left_product.push_back(1);
                continue;
            }
            lp = lp*nums[i-1];
            left_product.push_back(lp);

        }
        for(int j =n-1; j>=0;j--){
            if(j==n-1){
                 right_product[n-1]=1;
                 continue;
            }
            rp = rp*nums[j+1];
            right_product[j]=rp;

        }

        for(int k =0; k<n;k++){
            ans.push_back(left_product[k]*right_product[k]);
        }
        return ans;

    }
};