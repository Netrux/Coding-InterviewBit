int Solution::solve(string A) {
    int sol = 0;
    for(int i = 0;i < A.size();i++){
        if(A[i] == 'A'|| A[i] == 'E'|| A[i] == 'I'|| A[i] == 'O'|| A[i] == 'U'||A[i] == 'a'|| A[i] == 'e'|| A[i] == 'i'|| A[i] == 'o'|| A[i] == 'u')
            sol = sol + A.size() - i;
            sol = sol%10003;
    }
    return sol;
}
