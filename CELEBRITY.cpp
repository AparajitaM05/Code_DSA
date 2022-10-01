//Celebrity problem

bool knows(int a,int b)
{
    return input[a][b];
}
int findceleb(int n)
{
    stack<int> s;
    for(int i=0;i<n-1;i++)
    {
        s.push(i);
    }
    int c=0;
    while(c<n-1);
    {
        int f=s.top();
        s.pop();
        int se=s.top();
        s.pop();
        if(knows(f,se))s.push(se);
        else s.push(f);
        c++;
    }
    int celeb=s.top();
    int c0=0;
    
    return celeb;
}