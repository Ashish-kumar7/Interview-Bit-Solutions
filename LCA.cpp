bool find(TreeNode *a,int b)
 {
    if(!a) return false;
    if(a->val == b) return true;
    return find(a->left,b) || find(a->right,b);
 }
 TreeNode *findlca(TreeNode* a, int b, int c)
 {
    if(!a) return 0;
    if(a->val == b || a->val == c)
    {
        return a;
    }
    TreeNode *temp1 = findlca(a->left,b,c);
    TreeNode *temp2 = findlca(a->right,b,c);
    if(temp1 && temp2) return a;
    return temp1 ? temp1 : temp2;
 }
int Solution::lca(TreeNode* a, int b, int c) {
    if(!find(a,b) || !find(a,c)) return -1;
    TreeNode *temp = findlca(a,b,c);
    return temp->val;
}
