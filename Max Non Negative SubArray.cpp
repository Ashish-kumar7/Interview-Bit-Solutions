vector<int> Solution::maxset(vector<int> &A) {
    long long n = A.size();
    long long x=0;
    long long y=0;
    long long s=0;
    long long mx=0;
    long long my=0;
    long long ms=0;
    
    for(long long i=0;i<n;i++){
        if(A[i]<0){
         x=i+1, y=i+1, s=0;
        }
        
        else{
            s+=A[i], y++;
            if(s>ms || s<=ms && x==mx){
                ms=s, mx=x, my=y;
            }
        }
    }
    vector<int> V(A.begin()+mx, A.begin()+my);
    return V;
}