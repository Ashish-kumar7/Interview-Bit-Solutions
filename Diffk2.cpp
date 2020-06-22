int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<int,int>mp;
    if(A.size()==1){
        return 0;
    }
    for(int i=0;i<A.size();i++){
        mp[A[i]]++;
    }
    for(int i=0;i<A.size();i++){
        if(mp[A[i]+B]==1 && A[i]+B == A[i]){
            return 0;
        } 
        else if(mp[A[i]+B]){
            return 1;
        }
    }
    return 0;
}
