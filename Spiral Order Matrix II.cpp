vector<vector<int> > Solution::generateMatrix(int A) {
     vector<vector<int>> ans(A, vector<int> (A));
    int i = 0;
    int n = A - 1;
    int val = 1;
    while(i <= n){
        for(int k =i; k <=n; ++k){
            ans[i][k] = val;
            val++;
        }
        for(int k = i+1; k <=n;++k){
            ans[k][n] = val;
            val++;
        }
        for(int k = n-1; k >=i; --k){
            ans[n][k] = val;
            val++;
        }
        for(int k = n - 1;k > i;--k){
            ans[k][i] = val;
            val++;
        }
        i++;
        n--;
    }
    return ans;
}