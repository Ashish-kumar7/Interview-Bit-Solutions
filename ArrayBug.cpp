vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret; 
B=B%A.size();
    for (int i = B; i<A.size(); i++) {
        ret.push_back(A[i]);
    }

    for (int i = 0; i<B; i++) {
        ret.push_back(A[i]);
    }
    return ret; 
}
