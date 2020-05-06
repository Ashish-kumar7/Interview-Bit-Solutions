ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    if(A==NULL){
        return B;
    }
    else if(B==NULL){
        return A;
    }
   else if(A->val<B->val){
        A->next=mergeTwoLists(A->next,B);
        return A;
    }
    else if(A->val==B->val){
        A->next=mergeTwoLists(A->next,B->next);
        B->next=A;
        return B;
    }
    else if(A->val>B->val){
        B->next=mergeTwoLists(A,B->next);
        return B;
    }
}
