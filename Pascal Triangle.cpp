vector<vector<int> > Solution::solve(int n) {
    vector<vector<int>>A(n);
    if(n==0){
        return A;
    }
    for(int i=0;i<n;i++){
        A[i].resize(i+1);
        A[i][0]=1;
        A[i][i]=1;
        for(int j=1;j<i;j++){
            A[i][j]=A[i-1][j-1] + A[i-1][j];
        }
    }
    return A;
}
