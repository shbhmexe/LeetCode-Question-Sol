class Solution {
public:
    vector<list<int>> graph;
    int bfs(int src,vector<int>&vis,vector<int>&par){
        // priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        queue<int>pq;
        vector<int>dist(vis.size(),1e9);
        pq.push(src);
        vis[src] = 1;
        dist[src] = 0;
        int ans = INT_MAX;
        while(!pq.empty()){
            auto node = pq.front();
            pq.pop();
            for(auto ngh:graph[node]){
                if(vis[ngh]==1 and par[node]!=ngh){
                    ans = min(ans,dist[node]+dist[ngh]+1);
                }
                if(vis[ngh]==0){
                    vis[ngh] = 1;
                    par[ngh] = node;
                    dist[ngh] = dist[node]+1;
                    pq.push(ngh);
                }
            }
        }
        return ans;
    }
    int findShortestCycle(int n, vector<vector<int>>& edges) {
        int ans = INT_MAX;
        graph.resize(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=0;i<n;i++){
            vector<int>par(n,-1);
            vector<int>vis(n,0);
            ans = min(ans,bfs(i,vis,par));
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};