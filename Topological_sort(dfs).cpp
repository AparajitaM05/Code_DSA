//Topological sort(DFS)

class solution{
    public:
    void dfs(int s,stack<int>& st,vector<int>& vis,vector<int> adj[])
    {
        vis[s]=1;
        for(auto x:adj[s])
        {
            if(!vis[x])
            {
                dfs(x,st,vis,adj);
            }
        }
        st.push(s);
    }
    vector<int> toposort(int V, vector<int> adj[])
    {
        vector<int> ans;
        stack<int> st;
        vector<int> vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,st,vis,adj);
            }
        }
        for(auto x:st)
        {
            x=st.top();
            st.pop();
            ans.push_back(x);
        }
    }
    return ans;
}