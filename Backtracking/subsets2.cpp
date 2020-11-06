void make(vector<int>& A, vector<int> temp,int curr,vector<vector<int> >& ans){
    int n = A.size();
    
    ans.push_back(temp);
    
    if(curr == n)
        return;
    
    for(int i = curr;i < n;i++){
        vector<int> temp1(temp);
        temp1.push_back(A[i]);
        make(A,temp1,i+1,ans);
    }    
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {

    vector<vector<int> > ans;
    vector<vector<int> > ans2;
    vector<int> temp;
    if(A.size())
        sort(A.begin(),A.end());
        
    make(A,temp,0,ans);
    sort(ans.begin(),ans.end());
    int i;
    for(i = 0;i < ans.size()-1;i++){
        if(ans[i] != ans[i+1])
            ans2.push_back(ans[i]);
    }
    ans2.push_back(ans[i]);
    return ans2;
}
