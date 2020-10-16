void Solution::rotate(vector<vector<int> > &A) {
    vector<int> B;
    for(int i = 0;i < A.size();i++){
        for(int j = i;j < A[0].size();j++){
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i = 0; i < A.size();i++){
        for(int j = 0; j < (A[0].size())/2; j++){
            swap(A[i][j],A[i][A[0].size()-1-j]);
    }
}
}
