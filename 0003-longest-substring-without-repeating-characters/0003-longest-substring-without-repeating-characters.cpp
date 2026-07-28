class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n  = s.size();
        unordered_map<char,int> mp;
        
        int left = 0;
        int right = 0;
        int lenght = 0;
        if(n==1) return 1;
        
        while(right<n){
            if(mp.find(s[right])==mp.end()) mp[s[right]] = right;
            else{
                
                int k =left;
                
                left = mp[s[right]]+1;
                for(int i=k; i<left;i++){
                    mp.erase(s[i]);
                }
                
                
                mp[s[right]] = right;
            }
            lenght = max(lenght,right-left+1);
            right++;
        }
        return lenght;
    }
};