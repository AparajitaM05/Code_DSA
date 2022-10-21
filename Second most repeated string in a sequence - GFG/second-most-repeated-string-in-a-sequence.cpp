//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int freq=0;
        for(auto x:m)
        {
            freq=max(freq,x.second);
        }
        int sec_freq=0;
        string ans="";
        for(auto x:m)
        {
            if(x.second!=freq and x.second>sec_freq)
            {
                ans=x.first;
                sec_freq=x.second;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends