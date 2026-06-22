class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        int n = s.size();

        for(int i=0; i<n;i++){
            mp[s[i]]++;
        }
        
        vector<pair<char, int>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;   // sort by value
        });
        string ans = "";
        for(auto &p: v){
            for(int i=0; i<p.second;i++){
                ans+=p.first;
            }
        }
        return ans;
    }
};