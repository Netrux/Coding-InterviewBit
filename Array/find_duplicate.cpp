int Solution::repeatedNumber(const vector<int> &A) {
    vector<int> B = A;
    sort(B.begin(),B.end());
    for(int i = 0;i < B.size()-1;i++){
        if(B[i] == B[i+1])
            return B[i];
    }
    return -1;
}
