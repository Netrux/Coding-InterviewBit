int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int c = 0;
    int s = A.size();
    for(int i = 0;i < s;i++){
       // A[c] = A[0];
        if(A[i+2] == A[i+1] && A[i+1] == A[i]&& i < s-2)
            continue;
        else
            A[c++] = A[i] ;
    }
    return c;
}
