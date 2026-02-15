class Solution {
    bool isValid(int node, int v, vector<vector<bool>> &adj, vector<int> &col, int k) {
        for (int i = 0; i < v; i++) {
            if (adj[node][i] && col[i] == k) {
                return false;
            }
        }
        
        return true;
    }
    
    bool solve(int node, int v, vector<vector<bool>> &adj, vector<int> &col, int m) {
        if (node == v) {
            return true;
        }
        
        for (int i = 1; i <= m; i++) {
            if (isValid(node, v, adj, col, i)) {
                
                col[node] = i;
                
                if (solve(node+1, v, adj, col, m)) {
                    return true;
                }
                
                col[node] = 0;
            }
        }
        
        return false;
    }
    
  public:
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        // code here
        vector<vector<bool>> adj(v, vector<bool> (v, 0));
        
        for (auto &e: edges) {
            adj[e[0]][e[1]] = 1;
            adj[e[1]][e[0]] = 1;
        }
        
        vector<int> col(v, 0);
        
        return solve(0, v, adj, col, m);
    }
};