//next permutation
void nextPermutation(vector<int>& nums)
{
    int n=nums.size()-1;
    int infp=0;
    for(int i=n;i>0;i--)
    {
        if(nums[i]>nums[i-1])
        {
            infp=i;
            break;
        }
    }
    if(infp==0)
    {
        sort(nums.begin(),nums.end());
    }
    else
    {
        int mini=INT_MAX;
        int toswap=nums[infp-1];
        for(int j=infp;j<=n;j++)
        {
            if(nums[j]-toswap>0 && nums[j]-toswap<mini)
            {
                int temp=nums[infp-1];
                nums[infp-1]=nums[j];
                nums[j]=temp;
            }
        }
        sort(nums.begin()+infp,nums.end());
    }
}