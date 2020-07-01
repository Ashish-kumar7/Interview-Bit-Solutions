 void pre(TreeNode * A ,vector<int>&B){
     if(A==NULL){
        return ;
    }
    B.push_back(A->val);
    pre(A->left,B);
    pre(A->right,B);
 }
vector<int> Solution::preorderTraversal(TreeNode* A) {
     vector<int>B;
     pre(A,B);
     return B;
}