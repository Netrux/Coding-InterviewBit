int Solution::isPalindrome(string A) {
    string B = "";
    for(int i = 0;i < A.size();i++){
        if(A[i] > 96 && A[i] < 123)
            B.push_back(A[i]);
        else if(A[i] > 64 && A[i] < 90)
            B.push_back(A[i] + 32);
        else if(A[i] > 47 && A[i] < 58)
            B.push_back(A[i]);
            
    }
    for(int i = 0;i < B.size()/2;i++){
        if(B[i] != B[B.size()-1-i] )
            return 0;
    }
    
    return 1;
}
