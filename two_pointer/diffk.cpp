int Solution::diffPossible(vector<int> &A, int B) {
    int i = 0,j = A.size()-1;
    int ans =0;
    if(A.size() == 1)
            return(0);
            
    while(i < A.size() && j >= 0){
        if(i == j){
            ans = 0;
            break;
            
        }
            
        if(A[j] - A[i] == B)
            return(1);
        
        if(A[j] - A[i] > B)
            i++;
        
        if(A[j] - A[i] < B)
            j--;
            
    }
    
        while(i < A.size() && j >= 0){
        if(i == j)
            break;
            
        if(A[j] - A[i] == B)
            return(1);
        
        if(A[j] - A[i] > B)
            j--;
        
        if(A[j] - A[i] < B)
            i++;
            
    }
    return(ans);
}
