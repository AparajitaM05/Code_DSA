//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool cycle(int src, vector<bool>& vis, vector<bool>& dfsvis,vector<int> adj[])
    {
        vis[src]=true;
        dfsvis[src]=true;
        for(auto x:adj[src])
        {
            if(!vis[x]) 
            {
                if(cycle(x,vis,dfsvis,adj)) return true;
            }
            else if(vis[x]==true && dfsvis[x]==true) return true;
        }
        dfsvis[src]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<bool> vis(V+1, false), dfsvis(V+1,false);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(cycle(i,vis,dfsvis,adj)) return true;
            }
        }
        // code here
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends