
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()==0){
        return NULL;
    }
    
    int n=A.size();
    
    priority_queue<int,vector<int>,greater<int> >q;
    
    for(int i=0;i<n;i++){
        
        ListNode * l=A[i];
        
        while(l!=NULL){
            q.push(l->val);
            l=l->next;
        }
    }
    
    ListNode * res=new ListNode (0);
    
    ListNode * temp=res;
    
    while(!q.empty()) {
        
        ListNode * curr = new ListNode (q.top());
        
        q.pop();
        temp->next=curr;
        temp=temp->next;
    }
    return res->next;
}