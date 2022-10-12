//max product subarray
long long maxprod(int arr[], int n)
{
    long long ans=arr[0];
    long long ma=ans;
    long long mi=ans;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<0)
        {
            swap(ma,mi);
        }
        (arr[i]*ma>arr[i])?ma=arr[i]*ma:ma=arr[i];
        (arr[i]*mi>arr[i])?mi=arr[i]:mi=arr[i]*mi;
        ans=max(ans,ma);
    }
    return ans;

}