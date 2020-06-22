vector<int> Solution::nextGreater(vector<int> &A) {
    
    int n=A.size();
    if(n==0){
        return vector<int>();
    }
    
    vector<int>B(n);
    
    
    stack<int>S;
    
    for(int i=n-1;i>=0;i--){
        
        while(!S.empty() && S.top()<=A[i]){
            S.pop();
        }
        if(S.empty() ){
            B[i]=-1;
        }
        else {
            B[i]=S.top();
        }
        S.push(A[i]);
        
    }
    
    return B;
    
}
