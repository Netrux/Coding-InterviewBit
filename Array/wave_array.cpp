vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    if(A.size()%2 == 0){
        for(int i = 0;i < A.size();){
            swap(A[i],A[i+1]);
            i += 2;
        }
    }
    else{
        for(int i = 0;i < A.size()-1;){
            swap(A[i],A[i+1]);
            i += 2;
        }
    }
    return A;
}
