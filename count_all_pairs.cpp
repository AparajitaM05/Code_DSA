//count all pairs
class Solution{
    public:
    int getPairCount(int arr[],int n,int k)
    {
        unordered_map<int,int> m;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(m[k=arr[i]])
            {
                ans+=m[k-arr[i]];
            }
            m[arr[i]]++;
        }
        return ans;
    }
}