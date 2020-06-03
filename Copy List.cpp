RandomListNode* Solution::copyRandomList(RandomListNode* head){
    RandomListNode * curr=head;
    RandomListNode * start=head;
    RandomListNode * temp;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=new RandomListNode(curr->label);
        curr->next->next=temp;
        curr=temp;
    }
    curr=head;
    while(curr){
        if(curr->next){
            curr->next->random=curr->random?curr->random->next:curr->random;
        }
        curr=curr->next?curr->next->next:curr->next;
    }
    RandomListNode * original=head;
    RandomListNode * copy=head->next;
    temp=copy;
    while(original && copy){
        original->next= original->next? original->next->next : original->next;
        copy->next= copy->next?copy->next->next : copy->next;
        original=original->next;
        copy=copy->next;
    }
   return temp;
}