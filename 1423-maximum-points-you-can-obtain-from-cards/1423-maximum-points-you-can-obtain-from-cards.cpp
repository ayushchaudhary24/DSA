class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        for(int i=0; i<k;i++){
            sum+=cardPoints[i];
        }
        int mnx = sum;
        int l = n-1;
        for(int i=k-1;i>=0; i--){
            sum = sum-cardPoints[i]+cardPoints[l];
            mnx = max(sum,mnx);
            l--;
        }
        return mnx;
    }
};