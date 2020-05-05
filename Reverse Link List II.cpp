ListNode* Solution::reverseBetween(ListNode* A, int B, int C){
    ListNode * dummy = new ListNode(0);
    dummy->next=A;
    ListNode * pre=dummy;
    for(int i=0;i<B-1;i++){
        pre=pre->next;
    }
    ListNode * curr=pre->next;
    ListNode * Next=curr->next;
    for(int i=0;i<C-B;i++){
        curr->next=Next->next;
        Next->next=pre->next;
        pre->next=Next;
        Next=curr->next;
    }
    return dummy->next;
}