vector<int> Solution::getRow(int A) {
    
    vector<int>B(A+1);
    B[0]=1;
    B[A]=1;
    
    for(int i=1;i<A;i++){
        B[i]=B[i-1] * (A+1-i)/i ;
    }
    return B;
}
