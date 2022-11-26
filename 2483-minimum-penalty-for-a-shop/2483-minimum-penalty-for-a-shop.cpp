class Solution {
public:
    int bestClosingTime(string customers) 
    {
        int cy=count(customers.begin(),customers.end(),'Y');
        int cn=0;
        int loss=INT_MAX;
        int ans=0;
        for(int i=0;i<customers.size();i++)
        {
            int x=cy+cn;
            if(loss>x)
            {
                loss=x;
                ans=i;
            }
            if(customers[i]=='Y') cy--;
            else cn++;
        }
            
        int x=cy+cn;
        if(loss>x)
        {
            loss=x;
            ans=customers.size();
        }
        return ans;
    }
};