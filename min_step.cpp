int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int ans = 0 ;
    for(int i = 0;i < n-1; i++){
        int count_x = abs(A[i+1] - A[i]);
        int count_y = abs(B[i+1] - B[i]);
        if(count_x > count_y){
            ans = ans + count_x; 
        }
        else{
            ans = ans + count_y;
        }
    }
    return ans;
}

