ListNode* Solution::partition(ListNode* A, int B) {
    ListNode * start1= new ListNode(-1);
    ListNode * start2= new ListNode(-1);
    ListNode * t=A;
    ListNode * headpoint1= start1;
    ListNode * headpoint2=  start2;
    while(t!=NULL){
        if(t->val<B){
            start1->next=t;
            start1=start1->next;
        }
        else {
            start2->next=t;
            start2=start2->next;
        }
        t=t->next;
}
    start2->next=NULL;
    headpoint2=headpoint2->next;
    start1->next=headpoint2;
    headpoint1=headpoint1->next;
    return headpoint1;
}