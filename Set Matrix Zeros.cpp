void Solution::setZeroes(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    int col=0;
    int row=0;
    for(int i=0;i<n;i++){
        if(A[i][0]==0){
            col=1;
        }
    }
    for(int i=0;i<m;i++){
        if(A[0][i]==0){
            row=1;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(A[i][j]==0){
                A[0][j]=0;
                A[i][0]=0;
            }
        }
    }
    for(int i=1;i<n;i++){
            if(A[i][0]==0){
              for(int k=1;k<m;k++){
                  A[i][k]=0;
              }
            }
    }
    for(int i=1;i<m;i++){
            if(A[0][i]==0){
              for(int k=1;k<n;k++){
                  A[k][i]=0;
              }
            }
    }
    if(row==1){
        for(int i=0;i<m;i++){
            A[0][i]=0;
        }
    }
    if(col==1){
        for(int i=0;i<n;i++){
            A[i][0]=0;
        }
    }
}