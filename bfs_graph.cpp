
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
       vector<int> bfs;
       vector<int> v(V,0);
       
    //   for(int i=0;i<V;i++)
    //   {
        //   if(!v[i])
        //   {
               queue<int> q;
               q.push(0);
               v[0]=1;
           
          
               while(!q.empty())
               {
                   int node=q.front();
                   q.pop();
                   bfs.push_back(node);
                   
                   for(auto it:adj[node])
                   {
                       if(!v[it])
                       {
                           q.push(it);
                           v[it]=1;
                       }
                   }
               }
          //}
       //}
       
       return bfs;
        // Code here
    }
};

//{ Driver Code Starts.
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
            // 		adj[v].push_back(u); //un-directed graph
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends