//find a duplicate number
int findDuplicate(vector<int>& nums)
{
    for(int i=0;i<nums.size();i++)
    {
        int index=abs(nums[i]);
        if(nums[index]<0) return nums[index];
        nums[index]=-nums[index];
    }
    return -1;
}