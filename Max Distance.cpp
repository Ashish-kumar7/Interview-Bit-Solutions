int Solution::maximumGap(const vector<int> &A){
    vector<pair<int,int>>V;
    for(int i=0;i<A.size();i++){
        V.push_back(make_pair(A[i],i));
    }
        sort(V.begin(),V.end());
        int M[A.size()];
        int val=-1;
        for(int i=A.size()-1;i>=0;i--){
            val=max(val,V[i].second);
                M[i]=val;
        }
        int maxi=-1;
        for(int i=0;i<A.size();i++){
            maxi=max(maxi,M[i]-V[i].second);
        }
        return maxi;
}