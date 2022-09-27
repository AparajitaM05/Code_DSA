//Number of provinces
class Solution {
public:
    void dfs(int i,vector<vector<int>>& isConnected,vector<int>& vis,int n)
    {
        vis[i]=1;
        vector<int> adj;
        for(int j=0;j<n;j++)
        {
            int x=isConnected[i][j];
            if(x==1)
            {
                adj.push_back(j);
            }
            
        }
        for(auto x:adj)
        {
            if(!vis[x]) dfs(x,isConnected,vis,n);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
        int ans=0;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
            
            if(!vis[i])
            {
                 ans++;
               dfs(i,isConnected,vis,n);  
            }
           
           
        }
        return ans;
        
    }
};