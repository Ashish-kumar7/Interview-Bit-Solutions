int Solution::removeDuplicates(vector<int> &A) {
    int n=A.size();
    int i=0;
    int index=0;
    while(i<n){
        if(A[i]==A[index]){
            i++;
        }
        else if(A[i]!=A[index]){
            index++;
            A[index]=A[i];
            i++;
        }
    }
    A.resize(index+1);
    return A.size();
}