//best time to buy ans sell stock
int maxprofit(vector<int>& price)
{
    int n = price.size();
    vector<int>l(n,0),r(n,0);
    int mn=price[0];
    for(int i=1;i<n;i++)
    {
        l[i]=max(l[i-1],price[i]-mn);
        mn=min(mn,price[i]);
    }
    int mx=prince[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r[i]=max(r[i+1],mx-price[i]);
        mx=max(mx,price[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,l[i]+r[i]);
    }
    return ans;
}
  
