void Solution::sortColors(vector<int> &A) {
    int zero = 0,one = 0,two = 0;
    int j = 0;
    for(int i = 0;i < A.size();i++){
        if(A[i] == 0)
            zero++;
        if(A[i] == 1)
            one++;
        if(A[i] == 2)
            two++;
    }
    while(zero != 0){
        A[j] = 0;
        j++;
        zero--;
    }   
    while(one != 0){
        A[j] = 1;
        j++;
        one--;
    }
    while(two != 0){
        A[j] = 2;
        j++;
        two--;
    }    
}
