//shortest path in unweighted graph
vector<int> shrotestPath(int s,int v,vector<int> adj[])
{
    //s is the source vertex here.
    vector<int> vis(v,0);
    vector<int> dis(v, INT_MAX);
    queue<int> q;
    q.push(s);
    vis[s]=1;
    dis[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto x:adj[u])
        {
            if(!vis[x])
            {
                dis[x]=dis[u]+1;
                vis[x]=1;
                q.push(x);
            }
        }
    }
    return dis;
}