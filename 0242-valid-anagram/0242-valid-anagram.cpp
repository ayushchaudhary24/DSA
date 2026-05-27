class Solution {
public:
    bool isAnagram(string s, string t) {
        int m =s.size();
        int n = t.size();
        if(m!=n) return false;
        unordered_map<char,int> mp;

        for(int i=0 ;i<m;i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto it: mp){
            if(it.second!=0) return false;
        }
        return true;
    }
};
