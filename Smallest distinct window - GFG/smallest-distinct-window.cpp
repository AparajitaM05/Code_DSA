//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
      unordered_map<char,int> m1,m2;
      for(int i=0;i<str.size();i++)
      {
          m1[str[i]]++;
      }
      int i=0,j=0;
      int ans=INT_MAX;
      while(j<str.size())
      {
          m2[str[j]]++;
          while(m1.size()==m2.size())
          {
              ans=min(ans,j-i+1);
              m2[str[i]]--;
              if(m2[str[i]]==0)m2.erase(str[i]);
              i++;
          }
          j++;
      }
        // Your code goes here  
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends