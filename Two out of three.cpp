vector<int> Solution::solve(vector<int> &a, vector<int> &b, vector<int> &c) {
    map<int,vector<int> > m;
for(int i=0;i<a.size();i++){
    if(m[a[i]].size()==0)
    m[a[i]].push_back(1);
}
for(int i=0;i<b.size();i++){
    if(m[b[i]].size()<2){
        if(m[b[i]].size()==0 || m[b[i]][0]!=2){
            m[b[i]].push_back(2);
        }
    }
}
for(int i=0;i<c.size();i++){
    if(m[c[i]].size()==1){
        m[c[i]].push_back(3);
    }
}
vector<int> v;
for(auto it=m.begin();it!=m.end();it++){
    if(it->second.size()>1){
        v.push_back(it->first);
    }
}
return v;
}