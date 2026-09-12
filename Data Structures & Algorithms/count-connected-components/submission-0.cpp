class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> visited(n,false);

        for (auto& v : edges) {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) { 
                bfs_sink(i,visited,adj);
                count++;
            }
        }
    return count;
    }
private:

    void bfs_sink(int node, vector<bool>& visited, vector<vector<int>>& adj) {
        queue<int> q;
        q.push(node);

        visited[node] = true;

        while (!q.empty()) {
            int n = q.front();
            q.pop();

            for (int neighbour : adj[n]) {
                if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
    }

};
