class Solution {
public:
    string customSortString(string order, string s) 
    {
        string ans="";
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto x:order)
        {
            if(mp.find(x)!=mp.end())
            {
                
                auto index=mp.find(x);
                int count=index->second;
                string t(count,x);
                ans+=t;
                mp.erase(x);
                
            }
           
        }
        for(auto x:mp)
        {
            string t(x.second,x.first);
            ans+=t;
        }
       
        return ans;
    }
};