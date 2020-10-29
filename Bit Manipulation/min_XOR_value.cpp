int Solution::findMinXor(vector<int> &A) {
    int diff = abs(A[0]-A[1]),a1,a2,temp;
    sort(A.begin(),A.end());
    for(int i = 0;i<A.size()-1;i++){
        temp = abs(A[i]-A[i+1]);
        if(temp < diff){
            
        }
    }
    return(ans);
}
