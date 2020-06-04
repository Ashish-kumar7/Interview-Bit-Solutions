 bool check(TreeNode * root1 ,TreeNode * root2){
     if(root1==NULL && root2==NULL){
         return 1;
     }
     if(root1 && root2 && root1->val==root2->val){
        return ( (check(root1->left,root2->right)) && (check(root1->right,root2->left)) );
     }
     return 0;
 }
int Solution::isSymmetric(TreeNode* A) {
   return check(A,A);
}
