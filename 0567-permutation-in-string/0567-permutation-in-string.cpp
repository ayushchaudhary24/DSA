class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        unordered_map<char,int> mp;
        unordered_map<char,int> mp2;

        if(n1>n2) return false;
        for(int i=0; i<n1;i++){
            mp[s1[i]]++;
            mp2[s2[i]]++;
        }
        
        int k =0;
        
        
        for(int i=n1; i<n2;i++){
            if(mp==mp2) return true;
            mp2[s2[k]]--;
           if(mp2[s2[k]]==0) mp2.erase(s2[k]);
           mp2[s2[i]]++;
            k++;
        }
        if(mp==mp2) return true;
        return false;
        
    }
};
