//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends



int countRev (string s)
{
    if(s.size()%2!=0) return -1;
    int open=0,close=0;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{')
        {
            open++;
        }
        else
        {
           if(open==0) close++;
           else open--;
        }
    }
    ans=ceil(close/2.0)+ceil(open/2.0);
    return ans;
    // your code here
}