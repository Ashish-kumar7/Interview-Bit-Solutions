int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    if(A[0][0]==1){
        return 0;
    }
    int n=A.size();
    int m=A[0].size();
    int dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=0;
            }
        }
        dp[0][0]=1;
        for (int i = 1; i < n; i++) {
            if (A[i][0] == 0)
                dp[i][0] = dp[i-1][0];
        }    
    for (int j = 1; j < m; j++) {
            if (A[0][j] == 0)
                dp[0][j] = dp[0][j-1];
        }
    for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(A[i][j]==1){
                    continue;
                }
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
    }
    return dp[n-1][m-1];
}