class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int first = g[0]; //// 7,8,9,19   5,6,7,8
        int idx =0;
        for(int i=0; i<s.size();i++){
            if(s[i]>=first){
                idx = i;
                break;
            }
        }
        int j=0;
        int count =0;
        while(idx<s.size() && j<g.size()){
            if(s[idx]>=g[j]){
                count++;
                j++;
            }idx++;

        }
        return count;
    }
};