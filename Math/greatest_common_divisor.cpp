int Solution::gcd(int A, int B) {
    if(A == 0 || B == 0)
        return max(A,B);
    for(int i = min(A,B);i >= 2;i++){
        if(A%i == 0 && B%i == 0)
            return i;
    }
    return 1;
}
