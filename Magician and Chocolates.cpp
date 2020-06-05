int Solution::nchoc(int A, vector<int> &B) {
    long long int ans=0;
    int M = 1000000007;
    int n=B.size();
    priority_queue<int>Q;
    for( int i=0;i<n;i++ ){
        Q.push(B[i]);
    }
    while(A --){
        int curr = Q.top();
        Q.pop();
        ans+= curr;
        Q.push(curr/2);
    }
    return ans%M;
}