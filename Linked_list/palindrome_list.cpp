 int findLength(ListNode *temp){
     int l=0;
     while(temp!=NULL){
         l++;
         temp=temp->next;
     }
     return l;
 }
 
int Solution::lPalin(ListNode* A) {
    //if(!A)
    //    return 0;
    
    
    int i = 0;    
    ListNode *next;
    ListNode *current = A;
    ListNode *prev = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    //return findLength(A);
    
    ListNode *t2 = prev;

    while(t1 != NULL){
        if(t1->val != t2->val)
            return 0;
        t1 = t1->next;
        t2 = t2->next;
    }
    return 1;
}
