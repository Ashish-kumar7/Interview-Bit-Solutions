ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    if(A==NULL){
        return B;
    }
    if(B==NULL){
        return A;
    }
    int carry =0;
    int sum=A->val+B->val+carry;
    ListNode * nayanode = new ListNode(sum%10);
    carry=sum/10;
    A=A->next;
    B=B->next;
    ListNode * address=nayanode;
    while(A || B  || carry){
        sum = (A ? A->val : 0) + (B ? B->val : 0) + carry;
        ListNode * temp= new ListNode(sum%10);
        carry=sum/10;
        nayanode->next=temp;
        nayanode=temp;
        if(A){
            A=A->next;
        }
        if(B){
            B=B->next;
        }
    }
    return address;
}