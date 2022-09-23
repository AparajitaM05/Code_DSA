//Detect a cycle in directed acyclic graph

class Solution:
{
    bool dfs(int s,vector<int> &v,vector<int>& cv,vector<int> adj[])
    {
        v[s]=1;
        cv[s]=1;
        for(auto x:adj[s])
        {
            if(!v[x])
            {
                if(dfs(x,v,cv,adj))return true;
            }
            else if(v[x]==1 && cv[x]==1)return true;
        }
        cv[s]=0;
        return false;
    }
    bool iscyclic(int V,vector<int> adj[])
    {
        vector<int> v(V,0),cv(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,v,cv,adj))return true;
            }
        }
        return false;
    }
}