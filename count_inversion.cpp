//count inversions
//https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
class Solution{
    public:
    long long int count=0;
    void merge(long long arr[],long long l,long long r)
    {
        long long mid=(l+r)/2;
        long long len=r-l+1;
        long long k=0;
        long long i=l,j=mid+1;
        long long *created=new long long[len];
        while(i<=mid && j<=r)
        {
            if(arr[i]<=arr[j])
            {
                created[k++]=arr[i++];
            }
            else
            {
                created[k++]=arr[j++];
                count=count+mid+1-i;
            }
        }
        while(i<=mid)
        {
            created[k++]=arr[i++];
        }
        while(j<=r)
        {
            created[k++]=arr[j++];
        }
        for(int i=0;i<len;i++)
        {
            arr[l++]=created[i];
        }
        delete[] created;
    }
    void merge_sort(long long arr[],long long l,long long r)
    {
        long long mid=(l+r)/2;
        if(l>=r)return;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,r);
        

    }
     long long int inversionCount(long long arr[], long long N)
    {
        merge_sort(arr,0,N-1);
        return count;
    }
}