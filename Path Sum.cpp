int Solution::hasPathSum(TreeNode* A, int B) {
    if(A==NULL){
        return (B==0);
    }
    else{
        bool ans=0;
        int subSum=B-A->val;
        if(subSum==0 && A->left==NULL && A->right==NULL){
            return 1;
        }
        if(A->left){
            ans=ans || hasPathSum(A->left,subSum);
        }
        if(A->right){
            ans=ans || hasPathSum(A->right,subSum);
        }
        return ans;
    }
}