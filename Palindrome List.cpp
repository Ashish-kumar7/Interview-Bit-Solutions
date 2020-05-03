/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    
    stack<int>S;
    ListNode * start=A;
    while(start!=NULL){
        
        S.push(start->val);
        start=start->next;
    }
    
    ListNode * begin=A;
    
    while(!S.empty()){
        if(begin->val!=S.top()){
            return 0;
        }
        else {
            begin=begin->next;
            S.pop();
        }
    }
    
    if(S.empty()){
        return 1;
    }
    else{
        return 0;
    }
    
    
}
