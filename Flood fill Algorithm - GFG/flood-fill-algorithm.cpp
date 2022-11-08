//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool isValid(int i,int j,int col,int n,int m,vector<vector<int>>& image)
    {
        if(i>=0 && j>=0 && i<n && j<m && image[i][j]==col)return true;
        else return false;
    }
    void dfs(int i,int j,int col,int n,int m,vector<vector<int>>& image,int newColor)
    {
        image[i][j]=newColor;
        if(isValid(i+1,j,col,n,m,image)) dfs(i+1,j,col,n,m,image,newColor);
        if(isValid(i-1,j,col,n,m,image)) dfs(i-1,j,col,n,m,image,newColor);
        if(isValid(i,j+1,col,n,m,image)) dfs(i,j+1,col,n,m,image,newColor);
        if(isValid(i,j-1,col,n,m,image)) dfs(i,j-1,col,n,m,image,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int n=image.size();
        int m=image[0].size();
        int col=image[sr][sc];
       if(col==newColor) return image;
                
        dfs(sr,sc,col,n,m,image,newColor);
           
        // Code here 
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends