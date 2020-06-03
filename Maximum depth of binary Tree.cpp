
int Solution::maxDepth(TreeNode* A) {
    if(A==NULL){
        return 0;
    }
    int lefth=maxDepth(A->left);
    int righth=maxDepth(A->right);
    if(lefth>righth){
        return lefth+1;
    }
    else {
        return righth+1;
    }
}
