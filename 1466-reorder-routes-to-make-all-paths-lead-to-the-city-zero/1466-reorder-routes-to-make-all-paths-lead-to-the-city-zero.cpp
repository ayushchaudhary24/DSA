class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_map<int,vector<int>> original;
        for(auto e: connections){
            original[e[0]].push_back(e[1]);
        }

        unordered_map<int,vector<int>>fake;

        for(auto e: connections){
            fake[e[0]].push_back(e[1]);
            fake[e[1]].push_back(e[0]);
        }

        queue<int> q;
        vector<int> visited(n,0);

        q.push(0);
        visited[0]=1;
        int changes = 0;
        while(!q.empty()){
            int f = q.front();
            q.pop();
            for(auto nbr:fake[f]){
                if(!visited[nbr]){

                    q.push(nbr);
                    visited[nbr] = 1;
                    if(original.find(f)!=original.end()){
                        for(int val:original[f]){
                            if(val==nbr) changes++;
                        }
                    }
                }
            }
        }
        return changes;

    }
};