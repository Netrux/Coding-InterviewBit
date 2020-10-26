int Solution::solve(string A) {
    int sol = 0;
    int flag = 0;
    int i = 0,j = A.size()-1;
    while(i < j){
        if(A[i] == A[j]){
            i++;
            j--;
            flag = 1;
        }
        
        else {
            if(flag == 0)
                j--;
            sol =  A.size() - 1 - j;
            i = 0;
            flag = 0;
        }
    }
    return(sol);        
            
}
