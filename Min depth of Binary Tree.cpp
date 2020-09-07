
int Solution::minDepth(TreeNode* A) {
    if(A->left==NULL && A->right==NULL){
            return 1;
        }
    if(A->right==NULL){
        return minDepth(A->left)+1;
    }
    if(A->left==NULL){
        return minDepth(A->right)+1;
    }
    return 1+min(minDepth(A->left),minDepth(A->right));
}