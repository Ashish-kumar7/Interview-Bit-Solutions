void helper(TreeNode * root,vector<int>&vec){
    if(root==NULL){
        return ;
    }
    helper(root->left,vec);
    vec.push_back(root->val);
    helper(root->right,vec);
}
vector<int>V;
BSTIterator::BSTIterator(TreeNode *root) {
    V.clear();
    helper(root,V);
}
/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(V.size()==0){
        return 0;
    }
    return 1;
}
/** @return the next smallest number */
int BSTIterator::next() {
    int ans=V[0];
    V.erase(V.begin());
    return ans;
}