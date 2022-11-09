//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    void dfs(int s,vector<int> adj[],vector<bool>& vis)
    {
        vis[s]=true;
        for(auto x: adj[s])
        {
            if(!vis[x])
            {
                dfs(x,adj,vis);
            }
        }
    }
    bool isConnected(int s,vector<int> adj[],vector<bool>& mark)
    {
        vector<bool> vis(26,0);
        dfs(s,adj,vis);
        for(int i=0;i<26;i++)
        {
            if(vis[i]==false && mark[i]==true)return false;
        }
        return true;
    }
    int isCircle(int N, vector<string> A)
    {
        // code here
        vector<bool> mark(26,false);
        vector<int> adj[26];
        vector<int> indeg(26,0),outdeg(26,0);
        for(int i=0;i<N;i++)
        {
            string s=A[i];
            int u=s[0]-'a';
            int v=s[s.size()-1]-'a';
            mark[u]=mark[v]=true;
            indeg[v]++;
            outdeg[u]++;
            adj[u].push_back(v);
            
        }
        for(int i=0;i<26;i++)
        {
            if(indeg[i]!=outdeg[i])
            {
                return false;
            }
        }
        return isConnected(A[0].front()-'a',adj,mark);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<string> A;
        string s;
        
        for(int i = 0;i < N; i++)
        {
            cin>>s;
            A.push_back(s);
        }
        
        Solution ob;
        cout<<ob.isCircle(N, A)<<endl;
    }
    return 0;
}
// } Driver Code Ends