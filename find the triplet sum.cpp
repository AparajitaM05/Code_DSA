//Find the triplet sum
       bool find3sum(int a[],int n,int X)
       {
        sort(A,A+n)
        for(int i=0;i<n;i++)
        {
            int y=X-a[i];
            int low=i+1,high=n-1;
            while(low<high)
            {
                if(A[low]+A[high]==y) return 1;
                else if(A[low]+A[high]>y)high--;
                else low++;
            }
            return 0;
        }


       }