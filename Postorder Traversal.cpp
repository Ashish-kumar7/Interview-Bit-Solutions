 void post(TreeNode * A ,vector<int>&B){
     if(A==NULL){
        return ;
    }
    post(A->left,B);
    post(A->right,B);
    B.push_back(A->val);
 }
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int>B;
     post(A,B);
     return B;
}