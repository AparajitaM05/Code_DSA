// minimum steps to reach at the ened of the array
int minJumps(int arr[],int n)
{
    if(n==1)return 0;
    else if(arr[i]==0) return -1;
    else
    {
        int maxR=arr[0];
        int step=arr[0];
        int jump=1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1) return jump;
            maxR=max(maxR,arr[i]+i);
            step--;
            if(step==0)
            {
                jump++;
                if(i>=maxR) return -1;
                step=maxR-i;
            }
        }
    }
}