vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size();
    int x=(2*n)-1;
    
    vector<vector<int>>B(x);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            B[i+j].push_back(A[i][j]);
        }
    }
    
    return B;
}
