int Solution::singleNumber(const vector<int> &A) {
    int x=0;
    for(int i=0;i<A.size();i++){
        x=x^A[i];
    }
    return x;
}
