void solve(vector<int>&A,vector<vector<int>>&AA,vector<int>& temp,int  ind){
    AA.push_back(temp);
    for(int i=ind;i<A.size();i++){
        temp.push_back(A[i]);
        solve(A,AA,temp,i+1);
        temp.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
       sort(A.begin(),A.end());
        vector<vector<int>>AA;
        vector<int>temp;
        solve(A,AA,temp,0);
        return AA;
}