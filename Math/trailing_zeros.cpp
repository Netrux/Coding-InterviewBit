int Solution::trailingZeroes(int A) {
    int ans = 0;
    for(int i = 1;;i++){
        if(pow(5,i) > A)
            break;
        ans += A/pow(5,i);


    }
    return ans;

}
