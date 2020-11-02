ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *temp=A;
    ListNode *prev=NULL;
    int val=INT_MAX;
    while(temp!=NULL){
        if(temp->next!=NULL&&temp->next->val==temp->val){
            val=temp->val;
            ListNode* x=temp->next;
            temp->next=x->next;
            free(x);
        }
        else{
        if(val!=INT_MAX&&temp->val==val){
            if(prev==NULL){
                ListNode *y=temp;
                A=temp->next;
                temp=temp->next;
                free(y);
            }
            else{
                ListNode *y=temp;
                prev->next=temp->next;
                temp=temp->next;
                free(y);
            }
        }
        else{
        prev=temp;
        temp=temp->next;
        }
      }
    }
    return A;
}
