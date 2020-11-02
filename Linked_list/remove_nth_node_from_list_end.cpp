 int getLength(ListNode *temp){
     int l = 0;
     while(temp != NULL){
         l++;
         temp = temp->next;
     }
     return l;
 }
 
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *t1 = A;
    ListNode *t2 = A;
    
    int i = 0;
    int len = getLength(t1);
    
    if(len == 1)
        return NULL;
        
    if(B >= len)
        return A->next;
        
    if(B <= 1)
        while(t2 != NULL){
            
            if(t2->next->next == NULL){
                t2->next = NULL;
                return A; 
            }
            t2 = t2->next;
        }
        
    else{
        while(t2->next != NULL && i != len - B + 1){
            i++;
            if(i == len - B){
                t2->next = t2->next->next;
                return A;
                }    
            t2 = t2->next;
        }
    }
        
}
