//common elements
vector<int> commom_elements(int a1[],int n1,int a2,int n2,int a3[],int n3)
{
    unorderd_map<int,int> m1,m2,m3;
    vector<int> v;
    for(int i=0;i<n1;i++)
    {
        m1[a1[i]]++;
    }
    for(int i=0;i<n2;i++)
    {
        m2[a2[i]]++;
    }
    for(int i=0;i<n3;i++)
    {
        m3[a3[i]]++;
    }
    for(int i=0;i<n1;i++)
    {
        if(m1[a1[i]] && m2[a1[i]] && m3[a1[i]])
        {
            v.push_back(a1[i]);
        }

    }
    return v;

}