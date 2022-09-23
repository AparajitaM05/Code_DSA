//Topolojical sort(BFS) kanh's algo

vector<int> toposort(int V, vector<int> adj[])
{
    vector<int> indegree(V,0);
    vector<int> ans;
    queue<int> q;
    for(int i=0;i<V;i++)
    {
        vector<int> data=adj[i];
        for(auto x:data)
        {
             indegree[i]++;
        }
       
    }
    for(int i=0;i<V;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        ans.push_back(x);
        for(auto j:adj[x])
        {
            indegree[j]--;
            if(indegree[j]==0)q.push(j);
        }

    }
    return ans;
}



