int Solution::findMedian(vector<vector<int> > &A) {
    //sort(A.begin(),A.end());
    vector<int> B;
    int m = A.size();
    int n = A[0].size();
    for(int i = 0;i<m;i++)
        for(int j = 0;j<n;j++)
            B.push_back(A[i][j]);
    sort(B.begin(),B.end());
    return B[B.size()/2];

}
