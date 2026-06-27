class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> mp;
        for(char c:tasks) mp[c]++;
        vector<int> x;
        for(auto it: mp){
            x.push_back(it.second);
        }
        sort(x.begin(), x.end(), greater<int>());
        int prev = x[0];
        int s = 0;
        for(int i:x){
            if(prev==i){
                s++;
               
            }
            else break;
            
        }
        int ans = (x[0]-1)*(n+1)+s;
        return max(ans,(int)tasks.size());
    }
};