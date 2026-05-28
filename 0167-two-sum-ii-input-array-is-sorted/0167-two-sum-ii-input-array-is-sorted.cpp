class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 1; 
        int right = n;
        while(left<right){
            int ans = numbers[left-1] + numbers[right-1];
            
            if(ans>target) right--;
            else if(ans<target) left++;
            else break;
        }
        return {left,right};
    }
};
