int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int minval=INT_MAX;
    int num;
    for(int i=0;i<A.size()-1;i++){
        num=A[i]^A[i+1];
        minval=min(minval,num);
    }
    return minval;
}
// the more te close numbers the less is the xor value so here this logic works 
