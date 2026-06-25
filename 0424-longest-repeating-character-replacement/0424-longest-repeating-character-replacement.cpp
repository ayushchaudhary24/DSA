class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> mp;
        int n =s.size();
        int l = 0;
        int r = 0;
        int mnx =0;
        for(int r=0; r<n;r++){
            mp[s[r]]++;
            mnx = max(mnx, mp[s[r]]);
            int length  = r-l+1;
            if(k<length-mnx){
                mp[s[l]]--;
                l++;
            }

        } return n-l;
    }
};