//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    //Function to find the number of islands.
    bool isValid(int i,int j,int n,int m,vector<vector<char>>& grid)
    {
        if(i>=0 &&  i<n  && j>=0 && j<m && grid[i][j]=='1')
          {
              return true;
          }
        
        return false;
    }
    void dfs(int i,int j,int n,int m,vector<vector<char>>& grid)
    {
        grid[i][j]='0';
        
        if(isValid(i+1,j,n,m,grid)) dfs(i+1,j,n,m,grid);
        
        if(isValid(i-1,j,n,m,grid)) dfs(i-1,j,n,m,grid);
        
        if(isValid(i,j+1,n,m,grid)) dfs(i,j+1,n,m,grid);
        
        if(isValid(i,j-1,n,m,grid)) dfs(i,j-1,n,m,grid);
        
        if(isValid(i+1,j+1,n,m,grid)) dfs(i+1,j+1,n,m,grid);
        if(isValid(i+1,j-1,n,m,grid)) dfs(i+1,j-1,n,m,grid);
        if(isValid(i-1,j-1,n,m,grid)) dfs(i-1,j-1,n,m,grid);
        if(isValid(i-1,j+1,n,m,grid)) dfs(i-1,j+1,n,m,grid);
        
       
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              if(grid[i][j]=='1')
              {
                  count++;
                  dfs(i,j,n,m,grid);
              }
          }
      }
        return count;
    // bool isValid(int i, int j, int n , int m, vector<vector<char>>& grid){
    //     if(i>=0 && i<n && j>=0 && j<m && grid[i][j] == '1')
    //         return true;
        
    //     return false;
    // }
    
    // void numIslandsRec(int i, int j, int n , int m, vector<vector<char>>& grid){
        
    //     grid[i][j] = '0';
        
    //     if(isValid(i+1, j, n, m , grid))
    //         numIslandsRec(i+1, j, n, m, grid);
        
    //     if(isValid(i-1, j, n, m , grid))
    //         numIslandsRec(i-1, j, n, m, grid);
        
    //     if(isValid(i, j+1, n, m , grid))
    //         numIslandsRec(i, j+1, n, m, grid);
        
    //     if(isValid(i, j-1, n, m , grid))
    //         numIslandsRec(i, j-1, n, m, grid);
            
    //     if(isValid(i+1, j+1, n, m , grid))
    //         numIslandsRec(i+1, j+1, n, m, grid);
            
    //     if(isValid(i-1, j+1, n, m , grid))
    //         numIslandsRec(i-1, j+1, n, m, grid);
            
    //     if(isValid(i+1, j-1, n, m , grid))
    //         numIslandsRec(i+1, j-1, n, m, grid);
            
    //     if(isValid(i-1, j-1, n, m , grid))
    //         numIslandsRec(i-1, j-1, n, m, grid);
        
    // }
    
    // int numIslands(vector<vector<char>>& grid) {
        
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     int ans = 0;
        
    //     for(int i=0; i<n; i++){
    //         for(int j=0; j<m; j++){
    //             if(grid[i][j] == '1'){
    //                 ans++;
    //                 numIslandsRec(i, j, n, m, grid);
    //             }
    //         }
    //     }
        
    //     return ans;
    
    
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends