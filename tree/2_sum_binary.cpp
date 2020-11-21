 int check = 0;

 
 int search(TreeNode *A,int C,TreeNode* skip){
     if(A == NULL)
        return 0;
    if(C == A->val && A != skip)
        return 1;
    if(C > A->val)
        return search(A->right,C,skip);
    if(C < A->val)
        return search(A->left,C,skip);

     
 }
 
int find(TreeNode* A,int B,TreeNode* root){
    
     if(A == NULL)
        return 0;
    
    if(B < A->val)
       return find(A->left,B,root);
        
    else 
        return(search(root,B-A->val,A) || find(A->left,B,root) || find(A->right,B,root));
}
 
int Solution::t2Sum(TreeNode* A, int B) {
    //cout<<search(A,30)<<endl;
    return find(A,B,A);
    
}
