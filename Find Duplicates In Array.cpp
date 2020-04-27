int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    int B[n];
    for(int i=0;i<n;i++){
        B[i]=0;
    }
    for(int i=0;i<n;i++){
        B[A[i]]++;
    }
    int ans;
    for(int i=0;i<n;i++){
        if(B[i]>=2){
            ans=i;
        }
    }
    return ans ;
}