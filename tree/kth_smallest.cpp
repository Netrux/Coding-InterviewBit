 vector<int> ans;
 
void order(TreeNode *root) 
{ 
    if (root == NULL)
        return;
    else
    { 
        order(root->left); 
        ans.push_back(root->val);
        order(root->right); 
        return;
    } 
} 

int Solution::kthsmallest(TreeNode* A, int B) {
    order(A);
    return ans[B-1];
}