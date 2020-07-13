
#define m 1000000007

long long get_longestSWAPlen(string &A) 
{
    long long p1 = 0;
    vector<long long int> v(A.size(), 0);
    for(long long int p2 = 1; p2 < A.size(); p2++)
    {
        // suffix sequence matched to prefix
        if(A[p2] == A[p1])
        {
            p1++;
            v[p2] = p1;
        }
        else
        {
            // Since sequence not matched 
            // take p1 back to starting
            while(p1 != 0)
            {
                p1 = v[p1-1];
                
                // If inbetween a shorter sequence
                // matches stop p1 there only.
                if(A[p2] == A[p1])
                {
                    p1++;
                    v[p2] = p1;
                    break;
                }
            }
            
            // If p1 is at starting hence
            // Nothing matches to this seen 
            // sequence.
            if(p1 == 0)
                v[p2] = 0;
        }
    }
    return v[A.size()-1];
}
int Solution::solve(vector<string> &A) 
{
    vector<long long int> v(A.size());
    long long int res = 1;
    for(int i=0; i<A.size(); i++)
    {
        long long int k, n = A[i].size(), l = get_longestSWAPlen(A[i]);
        if(n%(n-l) == 0)
            n = n-l;
        for(k=1; (k*(k+1)/2) % n != 0; k++);
        
        v[i] = k;
    }
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
            v[j] = v[j]/__gcd(v[i], v[j]);
            
        res = (res*v[i])%m;
    }
    return res;
}