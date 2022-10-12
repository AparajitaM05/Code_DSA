// longest consecutive subsequence
int findlongestsubseq(int arr[], int n)
{
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int current=arr[i];
        int prev=current-1;
        int count=0;
        if(s.find(prev)==s.end())
        {
            while(s.find(current)!=s.end())
            {
                current++;
                count++;
            }
        }
        ans=max(ans,count);
    }
    return ans;
}
