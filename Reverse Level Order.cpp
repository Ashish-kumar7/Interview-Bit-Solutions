vector<int> Solution::solve(TreeNode* A) {
    stack<TreeNode *> st;
    
    if(!A){
        return {};
    }
    queue<TreeNode *>q;
    q.push(A);
    
    while(!q.empty()){
        TreeNode *use=q.front();
        q.pop();
        st.push(use);
        if(use->right)
            q.push(use->right);
        if(use->left)
            q.push(use->left);
    }
    
    vector<int>ans;
    
    while(!st.empty()){
        ans.push_back(st.top()->val);
        st.pop();
    }
    return ans;
}
