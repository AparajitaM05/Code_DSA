//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str)
    {
        int count=0;
        int co=0,c1=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')co++;
            else c1++;
            if(co==c1) count++;
        }
        if(co!=c1)return -1;
        else return count;
        //Write your code here
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends