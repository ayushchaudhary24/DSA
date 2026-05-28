class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int n = s.size();
        int left = 0;
        int ans = 0;
        for(int i= 0; i<n; i++){
            if(mp.find(s[i])!=mp.end()){
                left = max(left, mp[s[i]]+1);
            }
            mp[s[i]] = i;
            ans = max(ans, i-left+1);
        }
        return ans;

    }
};
