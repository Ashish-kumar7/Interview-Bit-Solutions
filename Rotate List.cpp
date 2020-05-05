ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode * head=A;
    int count=0;
    ListNode * sample=A;
    while(head!=NULL){
        sample=head;
        head=head->next;
        count++;
    }
    B=B%count;
    if(B==0){
        return A;
    }
    int p=count-B-1;
    ListNode * curr=A;
    while(p--){
        curr=curr->next;
    }
    ListNode * point=curr->next;
    curr->next=NULL;
    sample->next=A;
    return point;
}