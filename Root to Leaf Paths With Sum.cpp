void check(TreeNode * A,int B, vector<int>v , vector<vector<int>>&AA){
    if(A==NULL){
        return ;
    }
    if(B-(A->val)==0 && A->left==NULL && A->right==NULL){
        v.push_back(A->val);
        AA.push_back(v);
        return ;
    }
    v.push_back(A->val);
    check(A->left,B-(A->val),v,AA);
    check(A->right,B-(A->val),v,AA);
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<int>v;
    vector<vector<int>>AA;
    check(A,B,v,AA);
    return AA;
}