ListNode* Solution::deleteDuplicates(ListNode* start) {
    if(start==NULL){
        return NULL;
    }
    ListNode * A=start;
    ListNode * B=start->next;
    ListNode * C=A;
    while(B!=NULL){
        if(A->val==B->val){
            B=B->next;
        }
        else if(A->val!=B->val){
            A->next=B;
            A=A->next;
            B=B->next;
        }
    }
    A->next=B;
    return C;
}
