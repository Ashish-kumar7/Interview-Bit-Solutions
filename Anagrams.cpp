vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    vector<vector<int>>B;
    
    map<string,vector<int>>mp;
    
    for(int i=0;i<A.size();i++){
        string a=A[i];
        sort(a.begin(),a.end());
        
        mp[a].push_back(i+1);
    }
    
    for(auto it=mp.begin();it!=mp.end();it++){
        B.push_back(it->second);
    }
    return B;
}
