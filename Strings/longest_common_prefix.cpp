string Solution::longestCommonPrefix(vector<string> &A) {
    string ans ;
    vector<string> B;
    sort(A.begin(),A.end());
    for(int i = 0;i < A[0].size();i++){
        for(int j = 1;j < A.size();j++){
            if(A[0][i] != A[j][i])
                return ans;
        }
        ans.push_back(A[0][i]);
    }    
    return ans;
}

