vector<vector<int> > Solution::fourSum(vector<int> &A, int k) {
    
    sort(A.begin(),A.end());
    unordered_map<int,vector<pair<int,int> > > m;//sum repeat
    int n=A.size();
    for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
    int sum=A[i]+A[j];
    m[sum].push_back(make_pair(i,j));
}
}

set<vector<int> >ans;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        int sum=A[i]+A[j];
        if(m.find(k-sum)!=m.end()){
            vector<pair<int,int> >a=m[k-sum];
            for(auto &kk:a){
                auto p=kk;
                if(p.first!=i&&p.second!=i&&p.first!=j&&p.second!=j){
                    vector<int>temp= {A[i],A[j],A[p.first],A[p.second]};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }
            }
        }
    }
}
vector<vector<int> >res;
for(auto &i:ans){
    res.push_back(i);
}
return res;
}
