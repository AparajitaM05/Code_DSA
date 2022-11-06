//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    bool isvalid(int i, int j, vector<vector<bool>>& v, int n)
    {
        if(i<0 || j<0 || i>=n || j>=n || v[i][j]==true) return false;
        return true;
    }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int n=N;
	    int tx=TargetPos[0]-1,ty=TargetPos[1]-1;
	    int kx=KnightPos[0]-1, ky=KnightPos[1]-1;
	    if(tx==kx && ty==ky) return 0;
	    vector<vector<bool>> v(n,vector<bool>(n,false));
	    
	    queue<pair<int,int>> q;
	    q.push({kx,ky});
	    v[kx][ky]=true;
	    
	    int ans=0;
	    while(!q.empty())
	    {
	        int size=q.size();
	        ans++;
	        while(size!=0)
	        {
	            pair<int,int> p=q.front();
	            q.pop();
	            int ax=p.first;
	            int ay=p.second;
	            int xx[8]={1,1,-1,-1,2,-2,2,-2};
	            int yy[8]={2,-2,2,-2,1,1,-1,-1};
	            for(int i=0;i<8;i++)
	            {
	                int nx=ax+xx[i];
	                int ny=ay+yy[i];
	                
	                if(nx==tx && ny==ty) return ans;
	                
	                if(isvalid(nx,ny,v,n))
	                {
	                    q.push({nx,ny});
	                    v[nx][ny]=true;
	                }
	            }
	           size--; 
	        }
	       
	    }
	    return ans;
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends