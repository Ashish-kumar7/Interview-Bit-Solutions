 void in(TreeNode * A ,vector<int>&B){
     if(A==NULL){
        return ;
    }
    in(A->left,B);
    B.push_back(A->val);
    in(A->right,B);
 }
vector<int> Solution::inorderTraversal(TreeNode* A) {
     vector<int>B;
     in(A,B);
     return B;
}
