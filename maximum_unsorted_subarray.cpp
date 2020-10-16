vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> B = A;
    vector<int> ans;
    int flag = 0;
    sort(B.begin(),B.end());
    for(int i = 0;i < B.size();i++){
        if(A[i] != B[i] && flag == 0){
            ans.push_back(i);
            flag = 1;
        }
        if(A[i] == B[i] && flag == 1){
            ans.push_back(i-1);
            flag = 2;
        }
        if(A[i] != B[i] && flag == 2){
            ans.pop_back();
            flag = 1;
        }
    }
    if(ans.size() == 1){
        ans.push_back(A.size() -1);
        return ans;
    }
    if(ans.size() == 0){
        ans.push_back(-1);
        return ans;
    }
    return ans;
}
