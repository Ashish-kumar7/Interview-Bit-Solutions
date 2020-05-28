void Solution::merge(vector<int> &A, vector<int> &B) {
    // int i=0;
    // int j=0;
    // while(i<A.size() && j<B.size()){
    //   if(A[i]<B[j]){
    //       i++;
    //   } 
    //   else if(A[i]>=B[j]){
    //       A.insert(A.begin()+i , B[j]);
    //       i++;
    //       j++;
    //   }
    // }
    // for(int k=j;k<B.size();k++){
    //     A.push_back(B[k]);
    // }
    for(int i=0;i<B.size();i++)
    {
        A.push_back(B[i]);
    }
    
    sort(A.begin(),A.end());
    
}
