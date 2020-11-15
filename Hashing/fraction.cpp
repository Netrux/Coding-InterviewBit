string Solution::fractionToDecimal(int A, int B) {
    string ans;
    unordered_map<long,int> hash;
    if(A == 0)
        return "0";
        
    if((A < 0 && B > 0 ) || (A > 0 && B < 0)){
        ans.push_back('-');
    }     

    int divisor  = abs(A);
    int divident = abs(B);
    int remain = divisor % divident;
    cout<<divisor<<" "<<divident;
    ans += to_string(abs(divisor/divident));
    //cout<<ans;    
    if(remain == 0)
        return ans;
    
    ans.push_back('.');
    while(remain != 0){
        if(hash.find(remain) != hash.end()){
            ans[hash[remain]] = '(';
            ans.push_back(')');
            break;
        }
        else{
            hash[remain] = ans.size();
            remain *= 10;
            ans += to_string(remain/divident);
            remain %= divident;
        }    
    }
    return ans;
    }


    
