int Solution::removeElement(vector<int> &A, int B) {
    int index=0;
    for(int i=0;i<A.size();i++){
        if(A[i]!=B){
            A[index++]=A[i];
        }
    }
    return index;
}

