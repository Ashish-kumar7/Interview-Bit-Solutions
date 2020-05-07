 ListNode * solve(ListNode * head){
     if(head==NULL || head->next==NULL){
         return head;
     }
     ListNode * curr=head;
     ListNode * Next=head->next;
     head=head->next->next;
     Next->next=curr;
     curr->next=solve(head);
     return  Next;
 }
ListNode* Solution::swapPairs(ListNode* A) {
   return solve(A);
}