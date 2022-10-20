//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        unordered_map<char,int> m;
        for(auto i:A) m[i]++;
        for(auto i:B) m[i]--;
        for(auto i:m)
        {
            if(i.second!=0)return -1;
            
        }
        int ans=0;
        int i=A.size()-1,j=B.size()-1;
        while(i>=0 && j>=0)
        {
            if(A[i]==B[j])
            {
                i--;
                j--;
            }
            else
            {
                i--;
                ans++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends