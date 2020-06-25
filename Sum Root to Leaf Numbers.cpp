void sum(TreeNode * root ,long long int value,long long & ans){
    if(root==NULL){
        return ;
    }
    value=( (value*10) + root->val ) % 1003;
    if(root->left==NULL && root->right==NULL){
        ans+=value;
        return ;
    }
     sum(root->left,value,ans);
     sum(root->right,value,ans);
}
int Solution::sumNumbers(TreeNode* root) {
    long long value=0;
    long long int ans=0;
    sum(root,value,ans);
    return (ans)%1003;
}