int Solution::kthsmallest(const vector<int> &A, int B) {
    
    int n=A.size();
    int C[A.size()];
    for(int i=0;i<A.size();i++){
        C[i]=A[i];
    }
    
    sort(C,C+n);
    return C[B-1];
    
}
