ListNode* Solution::reorderList(ListNode* A) {
    if(A==NULL){
        return A;
    }
    ListNode * slow=A;
    ListNode * fast=A;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    stack<ListNode * >S;
    while(slow!=NULL){
        S.push(slow);
        slow=slow->next;
    }
    slow=A;
    for(; ;){
        ListNode * last=S.top();
        S.pop();
        if(last==slow || S.empty()){
            last->next=NULL;
            return A;
        }
        ListNode * Next=slow->next;
        slow->next=last;
        last->next=Next;
        slow=Next;
    }
    return A;
}