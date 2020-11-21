int findMax(int start,int end,vector<int> &A){
    int index;
    int maxVal = INT_MIN;
    
    for(int i=start; i<=end; i++){
        if(A[i]>maxVal){
            index = i;
            maxVal = A[i];
        }
    }
    return index;
}

TreeNode *  constructTree(int start,int end,vector<int> &A){
    
    if(start>end) return NULL;
    
    int maxIndex = findMax(start,end,A);
    TreeNode * root = new TreeNode(A[maxIndex]);
    
    root -> left = constructTree(start,maxIndex-1,A);
    root -> right = constructTree(maxIndex+1,end,A);
    
    return root;
    
}
 
 
TreeNode* Solution::buildTree(vector<int> &A) {
    int n = A.size();
    TreeNode* root = constructTree(0,n-1,A);
    return root;
}
