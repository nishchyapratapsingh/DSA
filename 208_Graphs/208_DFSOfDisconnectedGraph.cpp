void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, int c, vector<vector<int>> &res) {
    visited[node]=true;
    res[c].push_back(node);
    for (auto it: adj[node]) {
        if (!visited[it]) {
            dfs(it, adj,visited, c, res);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<int>> adj(V+1);
    for (int i=0; i<edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(V+1, false);
    vector<vector<int>> res;
    for (int i=0; i<V; i++) {
        if (!visited[i]) {
            res.push_back({});
            dfs(i, adj, visited, res.size()-1, res);
        }
    } 
    return res;
}