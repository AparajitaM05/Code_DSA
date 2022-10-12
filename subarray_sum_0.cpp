//subarray with sum 0
bool subarrayws(int arr[], int n)
{
    int s=0;
    unorderd_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
        if(s==0 or mp[s] or arr[i]==0)
        {
            return true;
        }
        else
        {
            mp[s]=1;
        }
    }
    return false;
}