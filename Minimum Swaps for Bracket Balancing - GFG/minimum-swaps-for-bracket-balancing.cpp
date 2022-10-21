//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S)
    {
        int open=0,close=0,ub=0,swaps=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='[')
            {
                open++;
                if(ub>0)
                {
                    swaps=swaps+ub;
                    ub--;
                }
               
            }
            else
            {
                close++;
                ub=close-open;
            }
        }
        // code here 
        return swaps;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends