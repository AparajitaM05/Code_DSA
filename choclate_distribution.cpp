//chocolate distribution problem
long long findchoclate(vector<long long>a, int n,int m)
{
    long long en=m-1;
    long long st=0;
    long long mi=a[en]-a[st];
    for(int i=0;i+m-1<n;i++)
    {
        long long d=a[en]-a[st];
        if(d<mi)
        {
            mi=d;
        }
        st++;
        en++;
    }
    return mi;
}