class Solution {
  private:
  bool detect(int src,vector<vector<int>> &adj,int vis[]){
      vis[src]=1;
      queue<pair<int,int>>q;
      q.push({src,-1});
      while(!q.empty()){
          int node=q.front().first;
          int parent=q.front().second;
          q.pop();
          for(auto adjacentnode:adj[node]){
              if(!vis[adjacentnode]){
                  vis[adjacentnode]=1;
                  q.push({adjacentnode,node});
              }else if(parent!=adjacentnode) return true;
          }
      }
      return false;
  }
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(detect(i,adj,vis)) return true;
            }
        }
        return false;
    }
};