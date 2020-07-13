int Solution::minPathSum(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    int dp[n][m];
    memset(dp, 0, sizeof(dp[0][0]) * n * m);
    dp[0][0] = A[0][0];
for(int x=1; x<n; x++){
    dp[x][0] += dp[x-1][0] + A[x][0];
}
for(int x=1; x<m; x++){
    dp[0][x] += dp[0][x-1] + A[0][x];
}
for(int x=1; x<n; x++){
     for(int y=1; y<m; y++){
        dp[x][y]+= min(dp[x-1][y],dp[x][y-1]) + A[x][y];
     }
 }
 return dp[n-1][m-1];
}