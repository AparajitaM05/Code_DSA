//redundant brackets
bool checkredundancy(string& s)
{
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==')')
        {
            char t=st.top();
            st.pop(); 
            bool flag=true;
            while(!st.empty() && t!='(')
            {
                if(t=='+' || t=='-' || t=='*' || t=='/')flag=false;
                t=st.top();
                st.pop();
            } 
            if(flag==true)return true;      
        }
        else
        {
            st.push(s[i]);
        }
        return false;
    }
}