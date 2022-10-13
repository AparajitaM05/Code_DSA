// array subset of another array

string issubset(int a1[],int n,int a2[],int m)
{
    unordered_map<int,int> ma;
    for(int i=0;i<n;i++)
    {
        ma[a1[i]]++;
    }
    int count=0;
    for(int i=0;i<m;i++)
    {
        if(ma[a2[i]])
        {
            count++;
            ma[a2[i]]--;
        }
    }
    if(count==m) return "Yes";
    else return "No";

}