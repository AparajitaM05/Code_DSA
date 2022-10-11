//merge intervals
https://leetcode.com/problems/merge-intervals/
vector<vector<int>> mergeintervals(vector<vector<int>>& intervals)
{
    int n=intervals.size();
    vector<vector<int>> ans;
    if(n==0)return ans;
    for(int i=0;i<n;i++)
    {
       if(ans.empty())
       {
        ans.push_back(intervals[i]);

       }
       else
       {
        vector<int>& v=ans.back();
        int y=v[1];
        //if they are overlapping
        if(y>=intervals[i][0])
        {
            v[1]=max(y,intervals[i][1]);
        }
        else
        {
            ans.push_back(intervals[i]);
        }
       }
       return ans;
    }
}