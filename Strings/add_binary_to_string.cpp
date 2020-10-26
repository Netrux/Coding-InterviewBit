string Solution::addBinary(string A, string B) {
    string ans;
    int sum = 0;
    int carry = 0;
    int len = 0;
    if(A.size() == 0) return B;
    if(B.size() == 0) return A;
    
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    
    if(A.size() > B.size())
        len = A.size();
    if(A.size() <= B.size())
        len = B.size();

    for(int  i = 0;i < len;++i){
        int a = i < A.size() ? A[i] - '0' : 0;
        int b = i < B.size() ? B[i] - '0' : 0;
        int temp = a + b + carry;
        carry = temp / 2;
        ans += to_string(temp%2);  
        
    }
    
    if(carry == 1)
        ans += to_string(carry);
   // return(ans);
    reverse(ans.begin(),ans.end());
    return ans;
    
}
