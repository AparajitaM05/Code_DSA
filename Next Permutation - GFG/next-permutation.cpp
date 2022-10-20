//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr)
    {
       int breakp=0;
       for(int i=N-1;i>0;i--)
       {
           if(arr[i]>arr[i-1])
           {
               breakp=i;
               break;
           }
       }
       if(breakp==0)
       {
           sort(arr.begin(),arr.end());
       }
       else
       {
           int mini=INT_MAX;
           int toswap=arr[breakp-1];
           for(int j=breakp;j<N;j++)
           {
               if(arr[j]-toswap>0 && arr[j]-toswap<mini)
               {
                   int temp=arr[j];
                   arr[j]=arr[breakp-1];
                   arr[breakp-1]=temp;
               }
           }
           sort(arr.begin()+breakp,arr.end());
           
       }
        // code here
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends