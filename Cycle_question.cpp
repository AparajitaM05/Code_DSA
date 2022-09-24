//Find Eventful Safe states

class solution{
    public:
    bool dfs(int s,vector<int>& vis,vector<int>& dfsvis,vector<vector<int>>& graph, vector<int>& cyclepre)
    {
        vis[s]=1;
        dfsvis[s]=1;
        for(auto x:graph[s])
        {
            if(!vis[x])
            {
                if(dfs(x,vis,dfsvis,graph,cyclepre)) return cyclepre[s]=1;
            }
            else if(vis[x]==1 &&dfsvis[x]==1)return cyclepre[s]=1;
        }
        dfsvis[s]=0;
        return false;
    }
    vector<int> eventfulSafenodes(vector<vector<int>>& graph)
    {
        int n=graph.size();
        vector<int> vis(n,0),dfsvis(n,0);
        vector<int> cyclepre(n,0);
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,dfsvis,graph,cyclepre);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!cyclepre[i])ans.push_back(i);
        }
        return ans;
    }
}