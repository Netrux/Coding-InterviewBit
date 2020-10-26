int Solution::lengthOfLastWord(const string A) {
    int count = 0;
    int flag = 0;
    for(int i = A.size()-1;i >=0 ;i--){
        if(A[i] == ' ' & flag == 0)
            flag = 0;
            
        if(A[i] == ' ' & flag != 0)
            break;
        
        if (A[i] != ' ' ){
            count++;
            flag = 1;
        }
            
    }        
    return(count);
}
