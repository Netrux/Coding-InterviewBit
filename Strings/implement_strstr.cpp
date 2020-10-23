int Solution::strStr(const string A, const string B) {
    int check = 0;
    for(int i = 0; i < A.size();i++){
        if(B[0] == A[i]){
            for(int j = 0;j < B.size();j++){
                if(B[j] != A[i+j])
                    break;
                check++;    
            }
            if(check == B.size())
                return(i);

        }
        check = 0;
    }
    return(-1);
}