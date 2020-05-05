ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode * start=A;
    int count=0;
    while(start!=NULL){
        start=start->next;
        count++;
    }
 if( count==1){
        return NULL;
    }
if(B>=count){
A=A->next;
return A;
}
    int p=count-B-1;
    ListNode * top=A;
    for(int i=0;i<p;i++){
        top=top->next;
    }
    top->next=(top->next)->next;
    return A;
}