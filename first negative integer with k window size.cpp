// first negative integer in whole k window
vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K)
{
    vector<long long> ans;
    queue<int> q;
    for(int i=0;i<K-1;i++)
    {
        if(A[i]<0)q.push(A[i]);
    }
    for(int i=K-1;i<N;i++)
    {
        if(A[i]<0)q.push(A[i]);
        if(!q.empty())
        {
            ans.push_back(A[i]);
            if(q.front()==i-K+1)
            {
                q.pop();
            }
        }
        else
        {
            ans.push_back(0);
        }
    }
    retuurn ans;
}