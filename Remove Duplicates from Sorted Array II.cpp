int Solution::removeDuplicates(vector<int> &A) {
    int i=0;
    int j=0;
    int count=0;
    if(A[i]==A[j]){
     count++;   
    }
    for(int i=1;i<A.size();i++){
        if(A[i]==A[j] && count<2){
            j++;
            A[j]=A[i];
            count++;
        }
        if(A[i]!=A[j]){
            j++;
            A[j]=A[i];
            count=1;
        }
    }
    return j+1;
}
