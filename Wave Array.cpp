vector<int> Solution::wave(vector<int> &A) {
    
    sort(A.begin(),A.end());
    
    
    for(int i=0;i<A.size();i=i+2){
        
        if(i==A.size()-1){
            break;
        }
                
        
        int temp=A[i+1];
        A[i+1]=A[i];
        A[i]=temp;
    }
    
    
    
    return A;
}
