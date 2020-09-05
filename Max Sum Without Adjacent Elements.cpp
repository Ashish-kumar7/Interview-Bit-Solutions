int Solution::adjacent(vector<vector<int> > &A) {
    int  n=A[0].size();
    int dp[n];
    dp[0]=max(A[0][0],A[1][0]);
    dp[1]=max(max(A[0][1],A[1][1]),dp[0]);
if(n==1){
    return dp[0];
}
if(n==2){
    return dp[1];
}
    for(int i=2;i<n;i++){
        dp[i]=max(dp[i-1],dp[i-2]+max(A[0][i],A[1][i]));
    }
    return dp[n-1];
}