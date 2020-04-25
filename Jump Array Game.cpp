int Solution::canJump(vector<int> &A) {
    int end=A.size()-1;
    for(int i=A.size()-2;i>=0;i--){
        if(A[i]+i >=end ){
            end=i;
        }
    }
    if(end==0){
        return 1;
    }
    else{
        return 0;
    }
}
