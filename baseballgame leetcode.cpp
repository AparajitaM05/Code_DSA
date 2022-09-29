//Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        vector<int> ans;
        for(string &s:operations)
        {
            if(s=="C") ans.pop_back();
            else if(s=="D") ans.push_back(ans.back()*2);
            else if(s=="+") ans.push_back(ans.back()+ans[ans.size()-2]);
            else ans.push_back(stoi(s));
        }
        return accumulate(ans.begin(),ans.end(),0);
    }
};