vector<int> Solution::prevSmaller(vector<int> &B) {
    
    vector<int>A(B.size(),-1);
    stack<int>st;
    
    for(int i=0;i<B.size();i++){
        
        while(!st.empty() && st.top()>=B[i]){
            st.pop();
        }
        
        if(!st.empty()){
            A[i]=st.top();

        }
        st.push(B[i]);
    }
    return A;
}
