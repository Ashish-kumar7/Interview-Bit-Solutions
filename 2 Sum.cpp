vector<int> Solution::twoSum(const vector<int> &A, int B) {
    
    unordered_map<int,int>mp;
    int n=A.size();
    for(int i=0;i<n;i++){
        if(mp.find(B - A[i])!=mp.end()){
            return {mp[B-A[i]]+1 , i+1};
        }
        else {
            mp.insert(make_pair(A[i], i));
        }
    }
    return {};
}