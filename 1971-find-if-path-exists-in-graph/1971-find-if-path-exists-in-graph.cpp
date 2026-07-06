class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> mp;

        for(auto e: edges){
            mp[e[0]].push_back(e[1]);
            mp[e[1]].push_back(e[0]);
        }

        vector<int> visited(n,0);
        visited[source] = 1;
        queue<int> q;
        q.push(source);

        if(source==destination) return true;

        while(!q.empty()){
            int f = q.front();
            q.pop();
            for(int nbr: mp[f]){
                if(!visited[nbr]){
                    if(nbr==destination) return true;
                    visited[nbr]=1;
                    q.push(nbr);
                }
            }
        }
        return false;
    }
};