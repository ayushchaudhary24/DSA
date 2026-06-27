class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        int n = s.size();
        int m =t.size();
        for(char c:t){
            mp[c]++;
        }

        int l = 0;
        int r = 0;
        int minlen = 1e9;
        int count =0;
        int strt = -1;
        for(int r=0; r<n;r++){
            if(mp[s[r]]>0) count++;
            mp[s[r]]--;

            while(count==m){
                if(r-l+1<minlen){
                    minlen = r-l+1;
                    strt = l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0) count--;
                l++;
            }
            
       }
       if(strt<0) return "";
       return s.substr(strt, minlen);
    }
};