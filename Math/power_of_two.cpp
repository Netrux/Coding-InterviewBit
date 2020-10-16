int Solution::isPower(int A) {
    for(int i = 0; i < A ; i++){
        for(int j = 1 ; j < log2(A) + 1; j++){
            if(A == pow(i,j))
                return 1;
            else if(A < pow(i,j))
                break;
        }
    }
    return 0;
}
