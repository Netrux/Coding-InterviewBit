int getLength(ListNode *temp){
     int l = 0;
     while(temp != NULL){
         l++;
         temp = temp->next;
     }
     return l;
 }
 
ListNode* reverse(ListNode *temp){
        if(!temp)
        return NULL;
    
    ListNode *nex ;
    ListNode *curr = temp;
    ListNode *prev = NULL;
    
    while(curr != NULL){
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    
    return prev;         
} 
 
ListNode* Solution::reorderList(ListNode* A) {
    ListNode *t1 = A;
    ListNode *forcopy = A;
    ListNode *l = A;
    int len = getLength(l);
    ListNode *t2 = A;
    ListNode *t3 = new ListNode(0);
    ListNode *t4 = t3;
    ListNode *copy = new ListNode(0);
    ListNode *copyptr = copy;
    
    
    while(t1 != NULL){
        t3->val = t1->val;
        t1 = t1->next;
        if(t1 != NULL){
            t3->next = new ListNode(0);
            t3 = t3->next;
        }
    }
    
    while(forcopy != NULL){
        copy->val = forcopy->val;
        forcopy = forcopy->next;
        if(forcopy != NULL){
            copy->next = new ListNode(0);
            copy = copy->next;
        }
    }
    
    
    ListNode *t5 = reverse(t4);
    int j = 1;

    while(t2 != NULL){
        if(j%2 == 0){
            t2->val = t5->val;
            t5 = t5->next;
        }
        if(j%2 == 1){
            t2->val = copyptr->val;
            copyptr = copyptr->next;
        }
        t2 = t2->next;
        j++;
    }
        return A;
    }
