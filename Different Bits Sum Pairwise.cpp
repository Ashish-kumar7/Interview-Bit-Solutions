const int mod = 1e9 + 7;
int Solution::cntBits(vector<int> &A) {
    int n=A.size();
    long long int jy=0;
    long long int ans =0;
    for(int i=0;i<32;i++){
        long long int count=0;
        for(int j=0;j<n;j++){
            if(A[j] & (1<<i)){
                count++;
            }
        }
        //ans+=(count*(n-count)*2)
        long long int x=( (n%mod)-(count%mod) ) % mod;
        //ans+=count*x*2;
        long long int  pk=( (count%mod) * (x%mod) )%mod;
        //ans+=pk*2;
        long long int pl=pk*2;
        //ans=ans+pl;
         ans=((ans%mod) +( pl%mod))%mod;
    }
    return ans;
}