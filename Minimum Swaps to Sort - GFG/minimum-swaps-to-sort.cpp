//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>> mp;
	    for(int i=0;i<nums.size();i++)
	    {
	        mp.push_back({nums[i],i});
	    }
	    sort(mp.begin(),mp.end());
	    int swaps=0;
	    for(int i=0;i<nums.size();i++)
	    {
	        pair<int,int> p=mp[i];
	        int val=p.first;
	        int index=p.second;
	        if(i!=index)
	        {
	            swaps++;
	            swap(mp[i],mp[index]);
	            i--;
	        }
	    }
	    return swaps;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends