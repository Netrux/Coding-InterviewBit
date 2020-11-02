ListNode* Solution::sortList(ListNode* A) {
    ListNode *t1 = A;
    ListNode *t2 = A;
    int i = 0;
    vector<int> B;
    
    while(t1 != NULL){
        B.push_back(t1->val);
        t1 = t1->next;
    }
    
    sort(B.begin(),B.end());
    
    while(t2 != NULL && i < B.size()){
        t2->val = B[i];
        t2 = t2->next;
        i++;
    }
    return A;
}