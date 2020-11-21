vector<int> ans;

void transverse(TreeNode* root){
    if(root == NULL)
        return ;
    else{    
        transverse(root->left);
        ans.push_back(root->val);
        transverse(root->right);
    }
}
BSTIterator::BSTIterator(TreeNode *root) {
    transverse(root);
    if(ans.size() > 0)
        reverse(ans.begin(),ans.end());
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(ans.size() > 0)
        return 1;
    else 
        return 0;
}

/** @return the next smallest number */
int BSTIterator::next() {
        int res = ans[ans.size()-1];
        ans.pop_back();
        return res;
}
