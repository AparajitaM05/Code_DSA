//Course_schedule(cycle detection)
class Solution {
public:
    bool dfs(int s, vector<int>& vis, vector<int>& dfsvis,vector<int>adj[])
    {
        vis[s]=1;
        dfsvis[s]=1;
        vector<int> data=adj[s];
        for(auto x:data)
        {
            if(!vis[x])
            {
                if(dfs(x,vis,dfsvis,adj))return true;
            }
            else if(vis[x] && dfsvis[x])return true;
        }
        dfsvis[s]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int n=numCourses;
        vector<int> vis(n,0),dfsvis(n,0);
        vector<int> adj[n];
        for(auto x:prerequisites)
        {
            vector<int> data=x;
            int a=data[0];
            int b=data[1];
            adj[a].push_back(b);
        }
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
               if(dfs(i,vis,dfsvis,adj)) return false;
            }
        }
       return true; 
    }
};