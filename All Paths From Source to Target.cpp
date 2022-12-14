//All Paths From Source to Target
class Solution {
public:
    void dfs( vector<vector<int>>&ans,vector<int>&path,vector<vector<int>>&graph,int curr)
    {
        path.push_back(curr);
        if(curr==graph.size()-1)
        {
            ans.push_back(path);
        }
        else
        {
            for(auto x:graph[curr])
            {
                dfs(ans,path,graph,x);
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
       vector<vector<int>> ans;
        vector<int> path;
        dfs(ans,path,graph,0);
        return ans;
        
    }
};