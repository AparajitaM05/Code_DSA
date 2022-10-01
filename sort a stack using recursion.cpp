//Sort a stack using recursio
void corr_pos(int x,stack<int>& s) 
{
    if(s.size()==0 || s.top()<x)
    {
        s.push(x);
    }
    else
    {
        int a=s.top();
        s.pop();
        corr_pos(x,s);
        s.push(a);
    }
}
void reverse(stack<int>& s)
{
    if(s.size()>0)
    {
        int a=s.top();
        s.pop();
        reverse(s);
        corr_pos(a,s);
    }
}
void SortedStack :: sort()
{
   //Your code here
   reverse(s);
}