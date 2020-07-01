void solve(vector<int>&A,int ind,vector<vector<int>>&AA,vector<int>&temp){
    AA.push_back(temp);
    for(int i=ind;i<A.size();i++){
        if(i>0 && i>ind && A[i]==A[i-1]){
            continue;
        }
        temp.push_back(A[i]);
        solve(A,i+1,AA,temp);
        temp.pop_back();
    }
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int>>AA;
    vector<int>temp;
    solve(A,0,AA,temp);
    return AA;
}
