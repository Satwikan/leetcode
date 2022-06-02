// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> dfsRec(vector<int> adj[], int s, bool visited[], vector<int>& res) {
        visited[s] = true;
        res.push_back(s);
        for(int u: adj[s])
            if (visited[u] == false)
                dfsRec(adj, u, visited, res);
        return res;
    }
  // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // cout << V << " dafasdf ";
        bool visited[V];
        for (int i = 0; i < V; i++)
            visited[i] = false;
        vector<int> res;
        return dfsRec(adj, 0, visited, res);
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends