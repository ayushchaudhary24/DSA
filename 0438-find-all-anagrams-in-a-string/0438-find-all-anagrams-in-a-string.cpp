class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int count = 0;
        int n = s.size();
        int m = p.size();
        if(m>n) return ans;
        unordered_map<char, int> mp;
        for(char c:p){
            mp[c]++;
        }
        int l=0;
        for(int r=0; r<n;r++){
            if(mp[s[r]]>0)count++;
            mp[s[r]]--;
            
            if(r-l+1==m){
                if(count==m) ans.push_back(l);
                mp[s[l]]++;
                if(mp[s[l]]>0) count--;
               
                l++;
            }
        }
        return ans;
    }
};