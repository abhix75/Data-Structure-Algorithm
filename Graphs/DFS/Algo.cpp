class Solution {
    
    private:
    
    void dfs(int node,vector<int>&ds,int vis[],vector<int>adj[])
    {
        vis[node]=1;
        
        ds.push_back(node);
        
        for(auto it : adj[node])
        {
            if(! vis[it])
            {
                dfs(it,ds,vis,adj);
            }
        }
        
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        int start=0;
        
        vector<int>ds;
        
        dfs(start,ds,vis,adj);
        
        return ds;
    }
};