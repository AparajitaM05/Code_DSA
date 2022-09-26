//Max area of island
class Solution {
public:
    bool isvalid(vector<vector<int>>& grid,int i,int j,int n,int m)
    {
        if(i>=0 && j>=0 && i<n && j<m && grid[i][j]==1)return true;
        
        return false;
    }
    void dfs(vector<vector<int>>& grid,int i,int j,int n,int m,int&c)
    {
         c++;
        grid[i][j]=0;
       
                if(isvalid(grid,i+1,j,n,m))dfs(grid,i+1,j,n,m,c);
                if(isvalid(grid,i-1,j,n,m))dfs(grid,i-1,j,n,m,c);
                if(isvalid(grid,i,j+1,n,m))dfs(grid,i,j+1,n,m,c);
                if(isvalid(grid,i,j-1,n,m))dfs(grid,i,j-1,n,m,c);
         

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    int c=0;
                    dfs(grid,i,j,n,m,c);
                    ans=max(ans,c);
                }
            }
        }
        return ans;
    }
};