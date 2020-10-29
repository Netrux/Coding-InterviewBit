int Solution::numSetBits(unsigned int A) {
    int sum = 0;
    while(A > 0){
        if(A%2 == 1)
            sum += 1;
        A = A/2;
    }
    
return(sum);
}
