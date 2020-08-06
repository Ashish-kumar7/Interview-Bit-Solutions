int Solution::longestSubsequenceLength(const vector<int> &A) {
if(A.size()==0)
{
    return 0;
}

int n=A.size();
vector<int> lis(n),lds(n);
for(int i=0;i<n;i++)
{
    lis[i]=1;
    lds[i]=1;
}

for(int i=1;i<n;i++)
{
    for(int j=0;j<i;j++)
    {
        if(A[i]>A[j]&&lis[i]<lis[j]+1)
        {
            lis[i]=lis[j]+1;
        }
    }
}
for(int i=n-2;i>=0;i--)
{
    for(int j=n-1;j>i;j--)
    {
        if(A[i]>A[j]&&lds[i]<lds[j]+1)
        {
            lds[i]=lds[j]+1;
        }
    }
}
int mx=lis[0]+lds[0]-1;
for(int i=1;i<n;i++)
{
    mx=max(mx,lis[i]+lds[i]-1);
}
return mx;
}