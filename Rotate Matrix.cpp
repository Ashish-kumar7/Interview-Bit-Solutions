void rotatefinal(vector<int>&A){
    int i=0;
    int j=A.size()-1;
    while(i<j){
        swap(A[i],A[j]);
        i++;
        j--;
    }
}
void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        rotatefinal(A[i]);
    }
}