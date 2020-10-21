int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    long long y = 0;
    if(n == 0)
        return 1%d;
        
    else if(n%2 == 0){
        y = pow(x,n/2,d);
        y = (y*y)%d;
    }
    else if(n%2 == 1){
        y = x%d;
        y = (y * pow(x,n-1,d))%d;
    }
    return (int)(d+y)%d;
}
